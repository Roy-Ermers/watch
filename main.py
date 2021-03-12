import lvgl as lv

import drivers.display as display
import screens.clock_screen as clock
from drivers.watch import watch
from style import background

pages = [{
    "x": 0,
    "y": 0
}, {
    "x": 0,
    "y": -1
}, {
    "x": -1,
    "y": 0
}, {
    "x": 1,
    "y": 0
}, {
    "x": 2,
    "y": 0
}, {
    "x": 0,
    "y": 1
}]


def init():
    # watch.motor.on()
    watch.lvgl_begin()

    # watch.motor.off()
    display.wakeup()


def interface():
    print("starting interface.")
    scr = lv.obj()
    print("created screen")
    tileview = lv.tileview(scr)
    tileview.set_valid_positions(pages, len(pages))
    print("created tileview")

    clock_screen = clock.init(tileview)
    tileview.add_element(clock_screen)
    lv.scr_load(scr)

    print("started interface.")


init()
interface()

# ble.advertise()
