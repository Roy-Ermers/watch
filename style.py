import lvgl as lv

accent = lv.color_hex(0xCD7B30)
black = lv.color_hex(0x000000)
white = lv.color_hex(0xffffff)
white_shade = lv.color_hex(0xBFBFBF)
antracite = lv.color_hex(0x1D2324)
antracite_light = lv.color_hex(0x363D3F)

background = lv.style_t()
background.init()

background.set_border_width(lv.STATE.DEFAULT, 0)
background.set_radius(lv.STATE.DEFAULT, 0)
background.set_bg_color(lv.STATE.DEFAULT, black)
background.set_border_width(lv.STATE.DEFAULT, 0)
background.set_text_color(lv.STATE.DEFAULT, white)
background.set_text_font(lv.STATE.DEFAULT, lv.regular_font)

text = lv.style_t()
text.init()

text.set_text_font(lv.STATE.DEFAULT, lv.regular_font)

title = lv.style_t()
title.init()

title.set_text_font(lv.STATE.DEFAULT, lv.title_font)
title.set_text_color(lv.STATE.DEFAULT, white)

subtitle = lv.style_t()
subtitle.init()

subtitle.set_text_font(lv.STATE.DEFAULT, lv.subtitle_font)
subtitle.set_text_color(lv.STATE.DEFAULT, white)
