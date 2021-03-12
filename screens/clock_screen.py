import lvgl as lv
from axp_constants import AXP202_BATT_PERCENTAGE
from drivers.watch import get_watch
from style import antracite_light, background, subtitle, text, title

months = [
    "jan.",
    "feb.",
    "mar.",
    "apr.",
    "mei",
    "jun.",
    "jul.",
    "aug.",
    "sep.",
    "oct.",
    "nov.",
    "dec.",
]


def init(parent):
    # global screen
    container = lv.obj(parent)
    container.set_size(parent.get_width(), parent.get_height())
    container.add_style(lv.obj.PART.MAIN, background)

    clock = lv.cont(container)
    clock.set_fit(lv.FIT.PARENT)
    clock.set_layout(lv.LAYOUT.CENTER)
    clock.set_size(container.get_width(), container.get_height())
    clock.add_style(lv.obj.PART.MAIN, background)

    batteryLabel = lv.label(container)

    hours = lv.label(clock)
    hours.set_text("00")
    hours.set_align(lv.label.ALIGN.CENTER)
    hours.add_style(lv.label.PART.MAIN, title)

    minutes = lv.label(clock)
    minutes.set_text("00")
    minutes.set_align(lv.label.ALIGN.CENTER)
    minutes.add_style(lv.label.PART.MAIN, title)

    date = lv.label(clock)
    date.set_text("1 jan. 2021")
    date.add_style(lv.label.PART.MAIN, subtitle)

    # minutes.align(hours, lv.ALIGN.OUT_BOTTOM_MID, 0, 0)

    batteryLabel.align(container, lv.ALIGN.IN_TOP_RIGHT, 0, 0)
    batteryLabel.set_align(lv.label.ALIGN.RIGHT)
    batteryLabel.add_style(lv.label.PART.MAIN, text)
    batteryLabel.set_style_local_text_color(lv.label.PART.MAIN,
                                            lv.STATE.DEFAULT, antracite_light)

    def update_clock(task):
        time = get_watch().rtc
        hours.set_text("{0:02n}".format(time.hours()))
        minutes.set_text("{0:02n}".format(time.minutes()))

        batteryLabel.set_text('{}%'.format(
            get_watch().pmu.getBattPercentage()))

        date.set_text("{} {} 20{}".format(time.date(), months[time.month()],
                                          time.year()))

    lv.task_create(update_clock, 500, lv.TASK_PRIO.HIGHEST, None)

    update_clock(None)

    return container
