import axp_constants as consts
import esp32
from machine import Pin, lightsleep
from micropython import const, schedule

from drivers.watch import watch as _watch

STANDBY_VOLTAGE = const(3000)
NORMAL_VOLTAGE = const(3000)


class _Battery:
    def __init__(self):
        self._standby_callbacks = []
        self.standing_by = False

        self._power = _watch.pmu
        self._power.adc1Enable(
            consts.AXP202_BATT_VOL_ADC1 | consts.AXP202_BATT_CUR_ADC1
            | consts.AXP202_VBUS_VOL_ADC1
            | consts.AXP202_VBUS_CUR_ADC1, consts.AXP202_ON)

        _watch.pmu_attach_interrupt(self._button_callback)

        self._power.enableIRQ(consts.AXP202_PEK_SHORTPRESS_IRQ, True)
        self._power.clearIRQ()
        self._power.setAdcSamplingRate(consts.AXP_ADC_SAMPLING_RATE_200HZ)
        self._power.setPowerOutPut(consts.AXP202_EXTEN, consts.AXP202_OFF)
        self._power.setPowerOutPut(consts.AXP202_DCDC2, consts.AXP202_OFF)
        self._power.setPowerOutPut(consts.AXP202_LDO4, consts.AXP202_OFF)

        self._power.setLDO3Mode(consts.AXP202_LDO3_MODE_DCIN)
        self._power.setPowerOutPut(consts.AXP202_LDO3, consts.AXP202_ON)

    def _button_callback(self, _):
        self._power.clearIRQ()
        print("[bat] power button pressed.")
        if self.standing_by:
            self.wakeup()

        else:
            self.standby()

    def _standby_callback(self, wakeup):
        for callback in self._standby_callbacks:
            callback(wakeup)

    def on_standby(self, callback):
        """
        The callback is called when the the device is going into standby mode.
        """
        self._standby_callbacks.append(callback)

    def standby(self):
        print("[bat] Standing by.")
        self.standing_by = True

        self._standby_callback(False)

        self._power.setPowerOutPut(consts.AXP202_LDO2, consts.AXP202_OFF)
        esp32.wake_on_ext1((Pin(35), ), esp32.WAKEUP_ALL_LOW)
        self._power.clearIRQ()

    def wakeup(self):
        print("[bat] Waking up.")
        self.standing_by = False
        self._power.setDCDC3Voltage(NORMAL_VOLTAGE)
        self._power.clearTimerStatus()
        self._power.offTimer()
        self._power.setPowerOutPut(consts.AXP202_LDO2, consts.AXP202_ON)
        self._standby_callback(True)

    def percentage(self):
        return self._power.getBattPercentage()


battery = _Battery()
