esptool.py --port /dev/ttyUSB0 erase_flash
esptool.py --chip esp32 --port /dev/ttyUSB0 --baud 2000000 --before default_reset --after hard_reset write_flash -z --flash_mode dio --flash_freq 80m --flash_size detect 0x1000 firmware.bin
# esptool.py --port /dev/ttyUSB0 write_flash 0x1000 firmware.bin

# stty 115200 </dev/ttyUSB0

# seconds=$(date '+%S')
# minutes=$(date '+%M')
# hours=$(date '+%H')
# days=$(date '+%u')
# date=$(date '+%d')
# months=$(date '+%m')
# years=$(date '+%y')

# echo -ne "watch.rtc.write_all(seconds=$seconds, minutes=$minutes, hours=$hours, day=$days, date=$date, month=$months, year=$years)" >/dev/ttyUSB0
# echo "watch.rtc.write_all(seconds=$seconds, minutes=$minutes, hours=$hours, day=$days, date=$date, month=$months, year=$years)"
# echo "updated date to $hours:$minutes:$seconds $date-$months-20$years"
