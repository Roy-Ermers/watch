from micropython import const
import bluetooth
import settings
import drivers.ble.advertisement_packet as advertisement_packet
from micropython import const
import binascii
import json
import struct
bluetooth_settings = settings.get_part("bluetooth")

_UART_UUID = bluetooth.UUID("6E400001-B5A3-F393-E0A9-E50E24DCCA9E")
_UART_TX = (
    bluetooth.UUID("6E400003-B5A3-F393-E0A9-E50E24DCCA9E"),
    bluetooth.FLAG_NOTIFY,
)
_UART_RX = (
    bluetooth.UUID("6E400002-B5A3-F393-E0A9-E50E24DCCA9E"),
    bluetooth.FLAG_WRITE,
)
_UART_SERVICE = (
    _UART_UUID,
    (
        _UART_TX,
        _UART_RX,
    ),
)

_IRQ_CENTRAL_CONNECT = const(1)
_IRQ_CENTRAL_DISCONNECT = const(2)
_IRQ_GATTS_WRITE = const(3)
_IRQ_GATTS_INDICATE_DONE = const(20)
_IRQ_ENCRYPTION_UPDATE = const(28)
_IRQ_PASSKEY_ACTION = const(31)

_IRQ_GET_SECRET = const(29)
_IRQ_SET_SECRET = const(30)

_FLAG_READ = const(0x0002)
_FLAG_NOTIFY = const(0x0010)
_FLAG_INDICATE = const(0x0020)

_FLAG_READ_ENCRYPTED = const(0x0200)

_IO_CAPABILITY_DISPLAY_ONLY = const(0)
_IO_CAPABILITY_DISPLAY_YESNO = const(1)
_IO_CAPABILITY_KEYBOARD_ONLY = const(2)
_IO_CAPABILITY_NO_INPUT_OUTPUT = const(3)
_IO_CAPABILITY_KEYBOARD_DISPLAY = const(4)

_PASSKEY_ACTION_INPUT = const(2)
_PASSKEY_ACTION_DISP = const(3)
_PASSKEY_ACTION_NUMCMP = const(4)


class _BLE:
    def __init__(self, ble, name=bluetooth_settings["name"]):
        self._ble = ble
        self._load_secrets()
        self._ble.irq(self._irq)
        self._ble.active(True)
        ((
            self._tx_handle,
            self._rx_handle,
        ), ) = self._ble.gatts_register_services((_UART_SERVICE, ))
        self._connections = set()

        # Increase the size of the rx buffer and enable append mode.
        self._ble.gatts_set_buffer(self._rx_handle, 100, True)
        self._connections = set()
        self._rx_buffer = bytearray()
        self._handler = None

        self._payload = advertisement_packet.generate(name=name,
                                                      appearance=192)
        self._advertise()

    def irq(self, handler):
        self._handler = handler

    def _irq(self, event, data):
        print(event, data)
        # Track connections so we can send notifications.
        if event == _IRQ_CENTRAL_CONNECT:
            conn_handle, _, _ = data
            print('Connection made!')
            self._connections.add(conn_handle)
        elif event == _IRQ_CENTRAL_DISCONNECT:
            conn_handle, _, _ = data
            print('Connection lost!')
            self._connections.remove(conn_handle)
            self._save_secrets()
            # Start advertising again to allow a new connection.
            self._advertise()
        elif event == _IRQ_ENCRYPTION_UPDATE:
            conn_handle, encrypted, authenticated, bonded, key_size = data
            print("encryption update", conn_handle, encrypted, authenticated,
                  bonded, key_size)
        elif event == _IRQ_PASSKEY_ACTION:
            conn_handle, action, passkey = data
            print("passkey action", conn_handle, action, passkey)
            if action == _PASSKEY_ACTION_NUMCMP:
                accept = int(input("accept? "))
                self._ble.gap_passkey(conn_handle, action, accept)
            elif action == _PASSKEY_ACTION_DISP:
                print("displaying 123456")
                self._ble.gap_passkey(conn_handle, action, 123456)
            elif action == _PASSKEY_ACTION_INPUT:
                print("prompting for passkey")
                passkey = int(input("passkey? "))
                self._ble.gap_passkey(conn_handle, action, passkey)
            else:
                print("unknown action")
        elif event == _IRQ_GATTS_INDICATE_DONE:
            conn_handle, value_handle, status = data
        elif event == _IRQ_SET_SECRET:
            sec_type, key, value = data
            key = sec_type, bytes(key)
            value = bytes(value) if value else None
            print("set secret:", key, value)
            if value is None:
                if key in self._secrets:
                    del self._secrets[key]
                    return True
                else:
                    return False
            else:
                self._secrets[key] = value
            return True
        elif event == _IRQ_GET_SECRET:
            sec_type, index, key = data
            print("get secret:", sec_type, index, bytes(key) if key else None)
            if key is None:
                i = 0
                for (t, _key), value in self._secrets.items():
                    if t == sec_type:
                        if i == index:
                            return value
                        i += 1
                return None
            else:
                key = sec_type, bytes(key)
                return self._secrets.get(key, None)
        elif event == _IRQ_GATTS_WRITE:
            conn_handle, value_handle, = data
            if conn_handle in self._connections and value_handle == self._rx_handle:
                self._rx_buffer += self._ble.gatts_read(self._rx_handle)
                print("message: " + self.read().decode().strip())
                if self._handler:
                    self._handler()

    def read(self, sz=None):
        if not sz:
            sz = len(self._rx_buffer)
        result = self._rx_buffer[0:sz]
        self._rx_buffer = self._rx_buffer[sz:]
        return result

    def write(self, data):
        for conn_handle in self._connections:
            self._ble.gatts_notify(conn_handle, self._tx_handle, data)

    def _advertise(self):
        print("Advertising bluetooth low energy ({}Us).".format(
            bluetooth_settings["visible_cooldown"]))
        self._ble.gap_advertise(bluetooth_settings["visible_cooldown"],
                                adv_data=self._payload,
                                connectable=True)

    def _load_secrets(self):
        self._secrets = {}
        try:
            with open("secrets.json", "r") as f:
                entries = json.load(f)
                for sec_type, key, value in entries:
                    self._secrets[
                        sec_type,
                        binascii.a2b_base64(key)] = binascii.a2b_base64(value)
        except:
            print("no secrets available")

    def _save_secrets(self):
        try:
            with open("secrets.json", "w") as f:
                json_secrets = [(sec_type, binascii.b2a_base64(key),
                                 binascii.b2a_base64(value))
                                for (sec_type,
                                     key), value in self._secrets.items()]
                json.dump(json_secrets, f)
        except:
            print("failed to save secrets")


_ble = _BLE(bluetooth.BLE())


def advertise():
    _ble._advertise()