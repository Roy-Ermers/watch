import settings
from machine import Pin, Timer, lightsleep

from drivers.battery import battery
from drivers.watch import get_watch

display_settings = settings.get_part("display")
tft = get_watch().tft
power = get_watch().pmu


def toggle(state):
    if state:
        wakeup()
    else:
        sleep()


def sleep():
    print("Display is going to sleep")
    tft.backlight_fade(0)
    tft.display_sleep()


def wakeup():
    print("Display is waking up")
    tft.display_wakeup()
    tft.backlight_fade(display_settings["brightness"])


battery.on_standby(lambda standby: toggle(standby))
