/*******************************************************************************
 * Size: 16 px
 * Bpp: 3
 * Opts: --size 16 --format lvgl --bpp 3 --font ./Rubik-Medium.ttf -o ./subtitle.c --range 0x20-0x7F
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef SUBTITLE
#define SUBTITLE 1
#endif

#if SUBTITLE

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xdc, 0x90, 0x1f, 0xfc, 0x88, 0xc9, 0x71, 0x62,
    0x0, 0xc0,

    /* U+0022 "\"" */
    0x3f, 0x2f, 0x88, 0x6, 0x18, 0x6, 0x41, 0x0,
    0x40, 0xde, 0xf, 0x0,

    /* U+0023 "#" */
    0x3, 0x20, 0x4, 0x80, 0xe7, 0x48, 0xfc, 0x7,
    0x70, 0x41, 0x60, 0x5b, 0xb1, 0xf8, 0x2e, 0x82,
    0x40, 0x8, 0x82, 0x98, 0x94, 0x3b, 0x42, 0x52,
    0x0, 0x8e, 0x38, 0x40, 0xd, 0xe2, 0xd3, 0x16,
    0x0, 0x44, 0x14, 0x1, 0x20, 0x3d, 0x8f, 0xc1,
    0x7c, 0x4, 0x40, 0xc4, 0xe, 0x98, 0x6, 0x80,
    0x40,

    /* U+0024 "$" */
    0x3, 0x26, 0x7, 0xe9, 0x0, 0x79, 0x52, 0x32,
    0x2, 0x75, 0x0, 0x36, 0x0, 0x81, 0xfe, 0x81,
    0x90, 0x2a, 0x1, 0xb2, 0x3, 0x42, 0x2, 0x52,
    0x20, 0x5b, 0x21, 0x2, 0x74, 0x82, 0xf4, 0x2,
    0x5b, 0xc2, 0x1b, 0x2, 0x40, 0x1e, 0x43, 0x2d,
    0x80, 0x7c, 0x80, 0x79, 0x15, 0xe, 0x30, 0x6,
    0xc8, 0x44, 0xf, 0xa4, 0x5e, 0xc0, 0xc9, 0x84,
    0x4,

    /* U+0025 "%" */
    0xf, 0xf4, 0x3, 0x5e, 0xc, 0x71, 0xa0, 0xd,
    0x50, 0xc5, 0x60, 0x83, 0x12, 0x1, 0xfb, 0x8a,
    0x1, 0x84, 0x41, 0x87, 0x1, 0x15, 0x31, 0xd,
    0x88, 0x1a, 0xed, 0x53, 0x7f, 0x62, 0x0, 0x95,
    0x1f, 0x8d, 0x10, 0x9, 0xa8, 0x49, 0x29, 0x80,
    0x31, 0x30, 0x3f, 0x71, 0x40, 0x14, 0xa6, 0x19,
    0xa0, 0x5c, 0x51, 0x0,

    /* U+0026 "&" */
    0x0, 0x6f, 0xea, 0x7, 0xdd, 0x12, 0x58, 0xe,
    0x26, 0xd8, 0x48, 0xf, 0xf1, 0x3, 0xc5, 0x19,
    0x84, 0x3, 0xdc, 0x33, 0x58, 0x68, 0x2, 0xa0,
    0x58, 0x19, 0xc0, 0x51, 0xb0, 0x36, 0xa3, 0x82,
    0x9, 0xb0, 0x8c, 0xa0, 0x41, 0x20, 0x58, 0x4,
    0x4, 0xc6, 0xce, 0xc0, 0x34, 0x2, 0x41, 0x20,
    0xb4, 0x14, 0x0,

    /* U+0027 "'" */
    0x3f, 0x10, 0x33, 0x0, 0x47, 0x80,

    /* U+0028 "(" */
    0x2, 0x99, 0x0, 0xcc, 0x80, 0x64, 0xba, 0x18,
    0x70, 0x24, 0x8, 0x18, 0x81, 0x10, 0x3e, 0x60,
    0x7f, 0xcc, 0x8, 0x81, 0xf1, 0x3, 0x10, 0x40,
    0xa8, 0x80, 0x4c, 0xae, 0x80, 0x64, 0x0,

    /* U+0029 ")" */
    0x79, 0x80, 0xe6, 0x40, 0x98, 0x32, 0xc, 0x14,
    0x2, 0x4, 0x1, 0xc, 0xc, 0x40, 0xff, 0xe3,
    0x90, 0x4, 0x30, 0x8, 0x10, 0x14, 0x57, 0xca,
    0x3c, 0x3a, 0x0,

    /* U+002A "*" */
    0x0, 0xbb, 0x2, 0xa4, 0x5, 0x5, 0x41, 0x12,
    0x1c, 0x40, 0x64, 0x29, 0x62, 0x0, 0x8e, 0x3a,
    0x0,

    /* U+002B "+" */
    0x3, 0xff, 0x85, 0xf0, 0x1f, 0xfc, 0xc3, 0x6c,
    0xd, 0xb0, 0x69, 0x40, 0x12, 0x8a, 0xfe, 0x7,
    0xf8, 0x81, 0xff, 0xcd, 0x60, 0x60,

    /* U+002C "," */
    0x17, 0x10, 0x89, 0x82, 0xc, 0x70,

    /* U+002D "-" */
    0xff, 0xa0, 0x1c, 0x40,

    /* U+002E "." */
    0xe, 0x11, 0x1b, 0x1, 0x80,

    /* U+002F "/" */
    0x3, 0x8f, 0xa0, 0x75, 0x1c, 0xe, 0x61, 0x1,
    0x90, 0x60, 0x77, 0x14, 0xe, 0x44, 0x80, 0xcc,
    0x50, 0x3a, 0x86, 0x6, 0x45, 0x81, 0xdc, 0x50,
    0x39, 0x12, 0x3, 0x31, 0x40, 0xea, 0x18, 0x18,
    0x92, 0x3, 0xa8, 0xe0, 0x70,

    /* U+0030 "0" */
    0x0, 0x6f, 0xec, 0xc0, 0x8e, 0x40, 0xc, 0xa0,
    0x20, 0x3f, 0xa0, 0x44, 0x21, 0x40, 0x32, 0x10,
    0x12, 0x2, 0x63, 0x81, 0xff, 0xd5, 0x40, 0x4c,
    0x70, 0x85, 0x0, 0xc8, 0x42, 0x3, 0xfa, 0x4,
    0x41, 0xc8, 0x1, 0x94, 0x0,

    /* U+0031 "1" */
    0x2, 0x7f, 0x88, 0x9, 0x0, 0x18, 0xac, 0xd,
    0x10, 0xc0, 0x51, 0x72, 0x6, 0xa0, 0x7f, 0xf8,
    0x98,

    /* U+0032 "2" */
    0x0, 0x77, 0xec, 0x80, 0x96, 0x20, 0xd, 0x40,
    0x20, 0x5f, 0x88, 0xe0, 0x8, 0x80, 0x28, 0x40,
    0x36, 0x10, 0x18, 0x10, 0x4, 0x80, 0x24, 0x10,
    0xe, 0x74, 0x34, 0x6, 0x90, 0x1c, 0x3, 0x46,
    0x1c, 0x3, 0x36, 0xa, 0x1, 0x8c, 0x0, 0xbf,
    0xc0, 0x7f, 0xc0,

    /* U+0033 "3" */
    0x1b, 0xff, 0x60, 0x3f, 0xf8, 0x1b, 0xfa, 0x0,
    0xe0, 0x73, 0x83, 0x10, 0x32, 0x82, 0x90, 0x3a,
    0x80, 0xb4, 0x40, 0xd1, 0xb1, 0x58, 0xc, 0xe4,
    0x60, 0x8, 0xb4, 0x7, 0xce, 0x54, 0x1, 0x80,
    0x69, 0x5, 0xfd, 0x3, 0x22, 0xc2, 0x0, 0xc8,
    0x0,

    /* U+0034 "4" */
    0x3, 0xb7, 0xe0, 0x3d, 0x8, 0x1f, 0x16, 0x40,
    0xfb, 0x8e, 0x7, 0xa1, 0x84, 0xe, 0x4c, 0xb0,
    0x3d, 0x46, 0x3, 0xcc, 0x7, 0xf0, 0xf, 0xc0,
    0x7f, 0x9f, 0xfc, 0x3, 0xf0, 0x1f, 0xfc, 0x80,

    /* U+0035 "5" */
    0xb, 0xff, 0x40, 0x4, 0xf, 0xfa, 0x7f, 0xa0,
    0xe, 0x7, 0xf1, 0x1b, 0xf6, 0x60, 0x4c, 0x22,
    0x68, 0xc0, 0x57, 0xb5, 0x4, 0x0, 0xe1, 0x0,
    0xc0, 0x15, 0xa8, 0x1f, 0x32, 0xa0, 0xa, 0x0,
    0x92, 0xf, 0xf2, 0x14, 0x5, 0x84, 0x1, 0xa8,
    0x0,

    /* U+0036 "6" */
    0x3, 0x2f, 0xc0, 0x7d, 0x43, 0x3, 0xd4, 0x18,
    0x7, 0x24, 0x1c, 0xf, 0x50, 0x1b, 0x18, 0x15,
    0x3, 0x19, 0x0, 0x10, 0x7f, 0xa8, 0x65, 0x0,
    0x80, 0x11, 0x8, 0xf, 0xf2, 0x1, 0x0, 0x32,
    0x10, 0x81, 0xfe, 0x81, 0x90, 0xe9, 0x0, 0x64,
    0x0,

    /* U+0037 "7" */
    0x7f, 0xfc, 0x78, 0x1f, 0xa7, 0xfa, 0x80, 0x20,
    0x77, 0xc, 0xe, 0x28, 0x50, 0x3a, 0x82, 0x40,
    0x73, 0x10, 0xe, 0x40, 0x10, 0x1d, 0x3, 0x3,
    0x89, 0xa, 0x7, 0x50, 0x88, 0x1c, 0xc7, 0x3,
    0x0,

    /* U+0038 "8" */
    0x0, 0xaf, 0xf4, 0x2, 0x55, 0x2, 0x1d, 0x1,
    0xc2, 0xfb, 0x2, 0x21, 0x8e, 0x0, 0x90, 0x12,
    0x10, 0x86, 0x41, 0x10, 0x96, 0xf0, 0x40, 0xc,
    0x82, 0x80, 0x40, 0x10, 0x4d, 0x79, 0x10, 0x80,
    0x60, 0x48, 0x12, 0x0, 0xc0, 0x90, 0x22, 0x9,
    0xf7, 0x22, 0x7, 0x48, 0x21, 0xf0,

    /* U+0039 "9" */
    0x0, 0xf7, 0xea, 0x80, 0xa4, 0x10, 0xa, 0xa0,
    0x58, 0x9f, 0x90, 0xa1, 0x2, 0xc0, 0x40, 0x4,
    0xf, 0x10, 0x24, 0xa, 0x1, 0x0, 0x12, 0x62,
    0xee, 0xc4, 0x1, 0x20, 0x10, 0x5, 0x81, 0x3f,
    0x40, 0x70, 0x3d, 0x44, 0x20, 0x75, 0x5, 0x81,
    0xc9, 0x7, 0x3, 0x0,

    /* U+003A ":" */
    0x6c, 0x64, 0x20, 0x7, 0xf2, 0x3, 0xcd, 0x8c,
    0x84, 0x0, 0x80,

    /* U+003B ";" */
    0x9, 0x91, 0x22, 0x81, 0xdb, 0xc0, 0x3f, 0xa6,
    0x41, 0x16, 0x9, 0x80, 0x50,

    /* U+003C "<" */
    0x3, 0xff, 0x82, 0x70, 0x1d, 0x31, 0x2, 0x39,
    0x8a, 0x1, 0x62, 0xba, 0xa, 0x89, 0x40, 0xff,
    0x95, 0x12, 0x81, 0x97, 0x2b, 0xa0, 0x36, 0x82,
    0x81, 0xcf, 0x10,

    /* U+003D "=" */
    0xff, 0xe0, 0x89, 0xe4, 0x2e, 0xdd, 0x40, 0xfe,
    0xbb, 0x75, 0x8, 0x9e, 0x40,

    /* U+003E ">" */
    0x3, 0xec, 0x80, 0xe3, 0x60, 0x1a, 0x87, 0x88,
    0x5, 0xd1, 0xcc, 0xa, 0xc1, 0x18, 0x1f, 0xd6,
    0xa, 0xd7, 0x47, 0x21, 0x43, 0xc4, 0x1, 0xb0,
    0xc,

    /* U+003F "?" */
    0x0, 0xf7, 0xea, 0x40, 0x58, 0x40, 0x2c, 0x12,
    0xb, 0xf0, 0x6, 0x42, 0x40, 0x48, 0x3, 0xf4,
    0x2, 0x21, 0x1, 0x95, 0x10, 0x81, 0xa8, 0x6c,
    0x6, 0x60, 0x20, 0x1e, 0x2c, 0xf, 0x29, 0x40,
    0xf4, 0xb0, 0xf, 0x10, 0x38,

    /* U+0040 "@" */
    0x3, 0xff, 0x88, 0xb7, 0xfa, 0x1, 0xd2, 0xb9,
    0x69, 0xb7, 0x20, 0x13, 0x95, 0xa4, 0x9c, 0xf0,
    0x10, 0xb5, 0xfb, 0x75, 0x9, 0x3, 0x44, 0x35,
    0x80, 0x41, 0x10, 0x4d, 0x14, 0x2, 0x3c, 0x3,
    0x0, 0xc1, 0x3, 0xff, 0x80, 0x40, 0xe2, 0x19,
    0x10, 0xd1, 0xc9, 0x70, 0x78, 0x8b, 0x34, 0x98,
    0xb1, 0x52, 0x3d, 0x7d, 0xd7, 0x0, 0x66, 0xc0,
    0x8a, 0xb5, 0x0, 0xb3, 0x6d, 0xf5, 0x52, 0x0,
    0xd3, 0xeb, 0x5b, 0x18, 0x0,

    /* U+0041 "A" */
    0x3, 0x7f, 0x1, 0xf2, 0x2, 0x40, 0x7b, 0x1,
    0x70, 0x3c, 0xc5, 0x8, 0xe, 0x40, 0xa2, 0x18,
    0x1b, 0x84, 0x28, 0xc0, 0x64, 0x28, 0x41, 0x1,
    0x20, 0x4, 0x12, 0xc, 0x7, 0x1, 0xfc, 0x45,
    0x0, 0x80, 0xf8, 0x93, 0x1, 0xff, 0x10, 0xb0,
    0x80, 0x75, 0x14,

    /* U+0042 "B" */
    0xbf, 0xf6, 0x60, 0x18, 0x2, 0x74, 0x80, 0x29,
    0xb4, 0xc3, 0x3, 0xec, 0x7, 0xf7, 0x8, 0xa,
    0x7f, 0x21, 0x0, 0xc4, 0xc0, 0x10, 0x14, 0xda,
    0x82, 0x1, 0xf3, 0x0, 0x40, 0xf3, 0x0, 0x40,
    0x4d, 0xa8, 0x10, 0x60, 0x9, 0x83, 0xa0,

    /* U+0043 "C" */
    0x0, 0x6f, 0xf5, 0x20, 0x47, 0x20, 0x25, 0x90,
    0x8, 0xe, 0xfc, 0x85, 0x0, 0x84, 0x20, 0x20,
    0x2, 0x40, 0x18, 0x11, 0xd8, 0x40, 0xfc, 0x48,
    0xf, 0xfe, 0x41, 0x20, 0x40, 0x30, 0x23, 0xb0,
    0x84, 0x21, 0x1, 0x0, 0x11, 0x1, 0xdf, 0x90,
    0xa0, 0xe, 0x40, 0x4b, 0x20,

    /* U+0044 "D" */
    0xbf, 0xf5, 0x40, 0x18, 0x1c, 0xaa, 0x2, 0x9f,
    0xc8, 0x50, 0x3e, 0xa0, 0x8, 0x1f, 0xcc, 0xf,
    0xfe, 0xdb, 0x3, 0xd4, 0x1, 0x1, 0x3f, 0x90,
    0x81, 0x81, 0xc6, 0xb0,

    /* U+0045 "E" */
    0xbf, 0xfc, 0x18, 0x1f, 0xe9, 0xff, 0x1, 0xff,
    0xc9, 0x9b, 0x68, 0x6, 0x27, 0x80, 0xa7, 0xfa,
    0x81, 0xff, 0xc9, 0x9f, 0xf1, 0x60, 0x7e,

    /* U+0046 "F" */
    0xbf, 0xfc, 0xc0, 0xfe, 0x9f, 0xf0, 0x1f, 0xfc,
    0x69, 0xfe, 0x80, 0x7c, 0x40, 0x4f, 0xf5, 0x3,
    0xff, 0x98, 0xc0, 0xf8,

    /* U+0047 "G" */
    0x0, 0x6f, 0xf5, 0x40, 0x47, 0x20, 0x25, 0x58,
    0x8, 0xe, 0xfc, 0x84, 0x0, 0x84, 0x20, 0x2a,
    0x42, 0x4, 0xc0, 0xd6, 0x89, 0x1, 0xd7, 0x69,
    0x1, 0xc5, 0x13, 0xc0, 0x63, 0xf8, 0x81, 0xcc,
    0xc, 0x41, 0x8, 0x42, 0x2, 0x80, 0x42, 0x3,
    0xbf, 0x21, 0x40, 0x1c, 0x80, 0x96, 0x40,

    /* U+0048 "H" */
    0xbd, 0x81, 0xb7, 0x6c, 0x7, 0xff, 0x4f, 0x93,
    0x80, 0xe7, 0xb6, 0x20, 0x7f, 0xf0, 0xa7, 0xf8,
    0x81, 0xff, 0xd4, 0x60, 0x7f, 0x0,

    /* U+0049 "I" */
    0xbd, 0xb0, 0xe0, 0x7f, 0xf3, 0xd8, 0xe0,

    /* U+004A "J" */
    0x1b, 0xff, 0x88, 0x1f, 0xcc, 0x6f, 0xf8, 0xf,
    0xff, 0x4b, 0xf8, 0x8, 0x80, 0x64, 0x16, 0x2,
    0x0, 0x29, 0x4, 0xfc, 0x85, 0x1, 0x61, 0x0,
    0xaa, 0x0,

    /* U+004B "K" */
    0xbd, 0x80, 0x3f, 0x9b, 0x1, 0xb0, 0x4c, 0xd,
    0x81, 0xa0, 0x6a, 0x47, 0x3, 0x44, 0x31, 0x3,
    0xd0, 0x81, 0xf6, 0x3, 0xc8, 0x28, 0x7, 0x68,
    0x1b, 0x1, 0xcd, 0x84, 0x40, 0x74, 0x42, 0x96,
    0x6, 0xa4, 0x70,

    /* U+004C "L" */
    0xbd, 0x81, 0xcc, 0x70, 0x3f, 0xff, 0x6f, 0xfe,
    0x60, 0x7c,

    /* U+004D "M" */
    0xbd, 0x81, 0xcf, 0xd6, 0x20, 0x1d, 0x0, 0xe6,
    0x5, 0x0, 0xf4, 0x2, 0x60, 0x71, 0xc, 0x40,
    0x40, 0xd4, 0x42, 0xc5, 0x3, 0xa0, 0xc2, 0x1,
    0xe6, 0x4, 0xc0, 0xf9, 0x88, 0x7, 0xe9, 0xd8,
    0x1f, 0xfc, 0x36, 0x8, 0x1c, 0x40, 0x0,

    /* U+004E "N" */
    0xbd, 0x81, 0xbf, 0x6, 0x20, 0x1f, 0xea, 0x7,
    0xf2, 0x40, 0x3e, 0x22, 0x1, 0xf5, 0x24, 0xc0,
    0xfb, 0x88, 0x40, 0xf1, 0x62, 0x1, 0xf4, 0x8,
    0xf, 0xd0, 0xf, 0xe6, 0x40, 0x98, 0x20, 0x5c,
    0x8,

    /* U+004F "O" */
    0x0, 0x6f, 0xf5, 0x20, 0x47, 0x20, 0x25, 0x88,
    0x8, 0x3, 0x7c, 0x47, 0x0, 0x85, 0x20, 0xc0,
    0x40, 0xcc, 0x9, 0x0, 0x24, 0x7, 0xf3, 0x3,
    0xfe, 0x20, 0x7f, 0x30, 0x26, 0x4, 0x80, 0x10,
    0x85, 0x20, 0xc0, 0x40, 0x40, 0x1b, 0xe2, 0x20,
    0x3, 0x90, 0x12, 0xc8, 0x0,

    /* U+0050 "P" */
    0xbf, 0xf6, 0x40, 0x18, 0x1c, 0x6a, 0x2, 0x7f,
    0xc8, 0x40, 0x3e, 0xe0, 0x81, 0xff, 0xc5, 0x80,
    0x81, 0x3f, 0xe2, 0x20, 0x1e, 0x2b, 0x20, 0x27,
    0xfb, 0x52, 0x7, 0xff, 0x29, 0x81, 0xfc,

    /* U+0051 "Q" */
    0x0, 0x6f, 0xf5, 0x20, 0x47, 0x20, 0x25, 0x88,
    0x8, 0x3, 0x7c, 0x47, 0x0, 0x85, 0x20, 0xc0,
    0x41, 0x0, 0xc0, 0x90, 0x2, 0x7, 0xff, 0x54,
    0x80, 0x60, 0x48, 0x1, 0x8, 0x52, 0xc, 0x4,
    0x4, 0x1, 0xbe, 0x22, 0x0, 0x39, 0x1, 0xd8,
    0x8, 0xdf, 0xec, 0x19,

    /* U+0052 "R" */
    0xbf, 0xf5, 0x20, 0x18, 0x1c, 0xb2, 0x2, 0x9f,
    0xc4, 0x70, 0x3e, 0xa1, 0x1, 0xff, 0xc4, 0x34,
    0x20, 0x29, 0xfb, 0x11, 0x0, 0xfd, 0x88, 0x14,
    0xfc, 0x1, 0x1, 0xf4, 0x10, 0xf, 0x99, 0x10,
    0x30, 0x3a, 0x6, 0x0,

    /* U+0053 "S" */
    0x0, 0xf7, 0xec, 0xc0, 0xa4, 0x10, 0x6, 0x40,
    0x6, 0x1f, 0xe8, 0x19, 0x2, 0xa0, 0x1c, 0x60,
    0x6e, 0x80, 0x38, 0x45, 0x6, 0xfa, 0x80, 0x97,
    0x84, 0x2b, 0x80, 0xcf, 0x78, 0xc, 0x31, 0x81,
    0x36, 0x5, 0xb4, 0x60, 0xb, 0x5, 0x20, 0x9f,
    0xb0, 0x8, 0x2c, 0x20, 0xb, 0xe0,

    /* U+0054 "T" */
    0x9f, 0xfe, 0x40, 0x7f, 0xa7, 0xea, 0x3, 0xf9,
    0x1, 0xff, 0xff, 0x3, 0xf3, 0x3, 0xc0,

    /* U+0055 "U" */
    0xdd, 0x1, 0xbf, 0x10, 0x4, 0xf, 0x30, 0x3f,
    0xfd, 0xed, 0x87, 0x2, 0x20, 0x58, 0x34, 0x2,
    0x0, 0x2c, 0x8b, 0xf9, 0xa, 0x3, 0x30, 0x25,
    0x50,

    /* U+0056 "V" */
    0x7e, 0x81, 0xdf, 0x92, 0x4, 0x6, 0x40, 0x11,
    0x0, 0x80, 0xb0, 0x40, 0x18, 0xe0, 0x48, 0x70,
    0x18, 0x20, 0x4, 0x82, 0x0, 0x80, 0x20, 0x82,
    0x3, 0x21, 0x85, 0x18, 0xd, 0xc2, 0x4, 0x20,
    0x32, 0x6, 0x2, 0x40, 0x72, 0xc, 0x20, 0x3d,
    0x80, 0xa8, 0x1e, 0x60, 0x9, 0x1, 0x0,

    /* U+0057 "W" */
    0x5f, 0x1, 0xf6, 0xed, 0x81, 0x3, 0xe2, 0x9,
    0x0, 0x20, 0x7e, 0x40, 0x86, 0x1f, 0x61, 0x1,
    0x98, 0x22, 0x8a, 0x8, 0x40, 0x8, 0xc0, 0x82,
    0x38, 0x20, 0x30, 0x68, 0x20, 0xd0, 0xe0, 0x18,
    0x3c, 0x41, 0x88, 0x40, 0x8, 0x4, 0x85, 0x20,
    0x2, 0x4, 0x40, 0x61, 0xc0, 0x10, 0x33, 0x0,
    0xc2, 0x0, 0xc0, 0xd8, 0x20, 0x24, 0x30, 0x0,

    /* U+0058 "X" */
    0x5f, 0x88, 0x13, 0xfc, 0x11, 0x10, 0xa, 0x8,
    0x3, 0x84, 0x82, 0x82, 0xc0, 0x16, 0x2b, 0x43,
    0x81, 0xa0, 0x8, 0x19, 0x3, 0xa8, 0x14, 0x3,
    0xc4, 0xf, 0xe3, 0x0, 0xa8, 0x1d, 0xc1, 0xa1,
    0x20, 0x13, 0x23, 0xa4, 0x14, 0xa, 0x6, 0x45,
    0x1, 0x44, 0x6, 0x1, 0x50, 0x88,

    /* U+0059 "Y" */
    0x9e, 0x81, 0xdf, 0x8c, 0x8, 0x81, 0x50, 0x88,
    0x63, 0x80, 0x28, 0x40, 0x10, 0x14, 0x20, 0x44,
    0x9, 0x88, 0x90, 0x40, 0x34, 0x6, 0x86, 0x40,
    0xe8, 0x5, 0x0, 0xf3, 0x0, 0xc0, 0xfc, 0x47,
    0x3, 0xff, 0xb2,

    /* U+005A "Z" */
    0x3f, 0xfe, 0x20, 0x7f, 0x8f, 0xfc, 0x41, 0x20,
    0x3a, 0x91, 0xc0, 0xe4, 0x82, 0x10, 0x31, 0xa1,
    0x30, 0x3b, 0x80, 0xa0, 0x74, 0x22, 0x81, 0xc9,
    0x86, 0x80, 0xea, 0xc, 0x3, 0x90, 0x3, 0xff,
    0x20, 0x3f, 0xc0,

    /* U+005B "[" */
    0xbb, 0x45, 0x13, 0x1, 0x7e, 0x20, 0x7f, 0xfb,
    0x7f, 0x10, 0x38,

    /* U+005C "\\" */
    0x9d, 0x1, 0xd4, 0x70, 0x38, 0x92, 0x3, 0xd4,
    0x30, 0x39, 0x8a, 0x7, 0x91, 0x20, 0x3b, 0x8a,
    0x7, 0x20, 0xc0, 0xf4, 0xc, 0xe, 0x62, 0x81,
    0xe4, 0x48, 0xe, 0xe2, 0x81, 0xc8, 0x30, 0x3c,
    0xc2, 0x3, 0xa8, 0xe0,

    /* U+005D "]" */
    0x7b, 0x4f, 0x93, 0x79, 0xe8, 0x1f, 0xfe, 0xd9,
    0xe8, 0x1f, 0x0,

    /* U+005E "^" */
    0x0, 0x5a, 0x2, 0x3a, 0x54, 0x3, 0xac, 0xe8,

    /* U+005F "_" */
    0x1f, 0xff, 0x81, 0x3, 0xfe,

    /* U+0060 "`" */
    0x70, 0x80, 0x78, 0x3a, 0x28,

    /* U+0061 "a" */
    0x1, 0x3f, 0xa0, 0x14, 0x65, 0x97, 0x40, 0x9e,
    0x98, 0x20, 0x12, 0x13, 0x80, 0x8, 0x7e, 0xc4,
    0x4, 0xa1, 0xdf, 0x1, 0x10, 0xc8, 0x40, 0x48,
    0x2b, 0x60, 0x23, 0x4a, 0x74, 0x1,

    /* U+0062 "b" */
    0xfc, 0x40, 0xff, 0xe7, 0x2d, 0xf9, 0x81, 0xa1,
    0x1, 0x18, 0x12, 0xfc, 0xc5, 0x2, 0xe0, 0x28,
    0x20, 0x4c, 0x1, 0x3, 0x98, 0x2, 0x7, 0x70,
    0x14, 0x10, 0x25, 0xf3, 0x14, 0xa, 0x92, 0x11,
    0x80,

    /* U+0063 "c" */
    0x0, 0xf7, 0xea, 0x5, 0x20, 0x90, 0x5c, 0x3,
    0x17, 0x70, 0xc, 0x80, 0x40, 0x35, 0x4c, 0xe,
    0x28, 0xb0, 0x38, 0xa2, 0x40, 0x10, 0xd, 0x50,
    0x62, 0xee, 0x1, 0x89, 0x4, 0x82, 0xe0,

    /* U+0064 "d" */
    0x3, 0xcb, 0xd0, 0x3c, 0x40, 0xff, 0xe0, 0xcf,
    0xd7, 0x81, 0x46, 0xa, 0x60, 0x4c, 0x4d, 0xc8,
    0x2, 0x1, 0x80, 0xa0, 0x18, 0x1f, 0x98, 0x1f,
    0x88, 0x4, 0x2, 0x81, 0x31, 0x77, 0x20, 0x51,
    0x82, 0xa0, 0x0,

    /* U+0065 "e" */
    0x0, 0xf7, 0xe8, 0x4, 0xe1, 0x65, 0xd0, 0x10,
    0x69, 0x8a, 0x42, 0x4, 0x49, 0x8c, 0xc0, 0x6d,
    0x20, 0x3a, 0xdf, 0x20, 0xd, 0x21, 0xc0, 0x18,
    0xd3, 0x46, 0x44, 0x82, 0xca, 0xc0,

    /* U+0066 "f" */
    0x2, 0x2e, 0x10, 0xf, 0x47, 0x40, 0x40, 0xed,
    0x1, 0xa2, 0x37, 0x80, 0xfc, 0x89, 0x0, 0x24,
    0x26, 0x1, 0xb1, 0x1, 0xff, 0xde,

    /* U+0067 "g" */
    0x1, 0x3f, 0x55, 0xe8, 0x8c, 0x15, 0x43, 0xc,
    0x4d, 0xc8, 0x2, 0x1, 0x80, 0xa0, 0x18, 0x1f,
    0x98, 0x1f, 0x88, 0x6, 0x2, 0x81, 0x31, 0x37,
    0x20, 0x51, 0x82, 0x98, 0x13, 0xfe, 0xbc, 0x31,
    0x21, 0x83, 0x46, 0x14, 0x4f, 0x89, 0x30, 0xb3,
    0x49, 0x30,

    /* U+0068 "h" */
    0xfc, 0x40, 0xfc, 0xc0, 0xff, 0xe2, 0x9b, 0xfa,
    0x1, 0xa2, 0x0, 0xe0, 0x12, 0xfc, 0xc3, 0x2,
    0xe0, 0x28, 0x1f, 0xfd, 0xd6, 0x0, 0x81, 0x0,

    /* U+0069 "i" */
    0x1f, 0x88, 0x1d, 0xf8, 0x8f, 0xc4, 0xf, 0xfe,
    0xa0,

    /* U+006A "j" */
    0x1, 0xbb, 0x3, 0xed, 0xd8, 0xb, 0xd0, 0x6,
    0x8, 0x1f, 0xfd, 0xb3, 0x31, 0x8, 0x9a, 0x80,

    /* U+006B "k" */
    0xfc, 0x7, 0xe2, 0x7, 0xff, 0x15, 0xfe, 0x20,
    0x4a, 0xa, 0x40, 0x2a, 0x2a, 0x2, 0x82, 0xa0,
    0x3c, 0xc0, 0xe4, 0x31, 0x3, 0x44, 0x38, 0x1d,
    0x49, 0x60, 0x22, 0x31, 0x28,

    /* U+006C "l" */
    0xfc, 0x40, 0xff, 0xea, 0x80,

    /* U+006D "m" */
    0xfc, 0xff, 0x62, 0xb7, 0xc4, 0xa, 0x22, 0x5a,
    0xb2, 0x58, 0xa, 0x5c, 0x1, 0xdc, 0x42, 0x0,
    0x80, 0x11, 0x80, 0x30, 0x40, 0xff, 0xf6, 0xb0,
    0x31, 0x0,

    /* U+006E "n" */
    0xfc, 0xb7, 0xe6, 0x6, 0xa1, 0x8, 0xc0, 0x9e,
    0xb0, 0x50, 0x2c, 0x1, 0x2, 0x4, 0xc0, 0xff,
    0xef, 0x0,

    /* U+006F "o" */
    0x0, 0xf7, 0xea, 0x40, 0x48, 0x28, 0xac, 0x1,
    0x8b, 0x58, 0x86, 0x40, 0x20, 0x14, 0x66, 0x7,
    0xcd, 0x80, 0xf9, 0x90, 0x8, 0x5, 0x4, 0x31,
    0x6b, 0x11, 0x4, 0x82, 0x8a, 0xc0,

    /* U+0070 "p" */
    0xfc, 0xb7, 0xe6, 0x6, 0xa1, 0x8, 0xc0, 0x9e,
    0xb0, 0x50, 0x2c, 0x1, 0x2, 0x4, 0xc0, 0x10,
    0x39, 0x80, 0x20, 0x77, 0x1, 0x41, 0x2, 0x5f,
    0x31, 0x40, 0xa1, 0x21, 0x18, 0x12, 0xdf, 0x98,
    0x1f, 0xfc, 0x80,

    /* U+0071 "q" */
    0x1, 0x3f, 0x57, 0xe8, 0x8c, 0x15, 0x3, 0xc,
    0x4d, 0xc8, 0x2, 0x1, 0x80, 0xa0, 0x18, 0x1c,
    0x40, 0x30, 0x38, 0x80, 0x20, 0x18, 0xa, 0x4,
    0xc4, 0xdc, 0x81, 0x46, 0xa, 0x80, 0x69, 0xfa,
    0x81, 0xff, 0xc6, 0x21, 0x80,

    /* U+0072 "r" */
    0xfc, 0xf7, 0x60, 0x21, 0x3, 0x2f, 0xcc, 0x7,
    0x3, 0x98, 0x1f, 0xfc, 0xf0,

    /* U+0073 "s" */
    0x6, 0xfe, 0xc8, 0x7, 0x48, 0xcd, 0x44, 0x85,
    0x9a, 0x2, 0x2, 0xa2, 0xd0, 0xa5, 0x5f, 0x88,
    0x5b, 0x21, 0x28, 0x62, 0x2e, 0x4, 0x1d, 0xa9,
    0x43, 0x39, 0x23, 0x2e, 0x0,

    /* U+0074 "t" */
    0x1, 0xf8, 0xf, 0xfe, 0x2d, 0xe0, 0x3f, 0x22,
    0x40, 0x9, 0x9, 0x80, 0x6c, 0x40, 0x7f, 0xf3,
    0x48, 0x18, 0x8d, 0x8c, 0x7, 0x20, 0x80,

    /* U+0075 "u" */
    0x1f, 0x88, 0x5, 0xf0, 0x1f, 0x88, 0x1f, 0xfd,
    0x92, 0x28, 0xe, 0x5, 0x43, 0xdd, 0x1, 0x36,
    0x4, 0xa8, 0x20,

    /* U+0076 "v" */
    0x9e, 0x1, 0x2f, 0x68, 0x30, 0x2e, 0x31, 0x20,
    0x40, 0x20, 0xc5, 0x14, 0x30, 0x80, 0x30, 0xc6,
    0x1c, 0x9, 0x6, 0x82, 0x2, 0xe2, 0x6, 0x6,
    0x40, 0x54, 0xe, 0x60, 0x90, 0x0,

    /* U+0077 "w" */
    0x7d, 0x80, 0x5d, 0x80, 0x5e, 0x21, 0x40, 0x71,
    0x40, 0x71, 0x88, 0x20, 0x10, 0x20, 0x10, 0x41,
    0x4, 0x41, 0x8, 0x84, 0x3, 0x8d, 0x47, 0x1d,
    0xc, 0x1, 0x4, 0x84, 0x92, 0x50, 0x80, 0x89,
    0x90, 0xc0, 0x82, 0x4, 0x80, 0x50, 0xc0, 0x30,
    0x35, 0x0, 0x40, 0x11, 0x80, 0x0,

    /* U+0078 "x" */
    0x5f, 0x1, 0x6e, 0x90, 0x94, 0xc, 0x92, 0x1c,
    0x36, 0x83, 0x80, 0x30, 0x41, 0x8, 0x13, 0x2,
    0x60, 0x68, 0x5, 0x0, 0x93, 0x14, 0x34, 0x2,
    0x88, 0xa0, 0xa2, 0x4, 0xc3, 0x42, 0x0,

    /* U+0079 "y" */
    0x7e, 0x1, 0x1f, 0x90, 0x60, 0x50, 0x52, 0x41,
    0x0, 0x41, 0x88, 0x38, 0x61, 0x80, 0x41, 0xa,
    0x28, 0x13, 0x14, 0x98, 0xa, 0x84, 0x28, 0x18,
    0x90, 0x6, 0x7, 0x20, 0xc0, 0xf3, 0x14, 0xe,
    0x40, 0x90, 0x1d, 0xc4, 0x3, 0x0,

    /* U+007A "z" */
    0x3f, 0xfa, 0x2, 0x70, 0x11, 0xda, 0x40, 0x20,
    0x13, 0x61, 0x80, 0x8c, 0x10, 0x81, 0x60, 0x98,
    0x15, 0x6, 0x81, 0x24, 0x1, 0xb5, 0x40, 0x89,
    0xc8,

    /* U+007B "{" */
    0x2, 0x57, 0x0, 0x55, 0x10, 0x10, 0x5e, 0x0,
    0x92, 0x0, 0x43, 0x2, 0x60, 0x76, 0x4, 0x4,
    0x62, 0x81, 0xc4, 0x4, 0x42, 0x1, 0x70, 0x40,
    0x98, 0x1c, 0x43, 0x3, 0x89, 0x1, 0x41, 0xb0,
    0x3, 0x80, 0x80,

    /* U+007C "|" */
    0x6d, 0x20, 0xf, 0xfe, 0xa1, 0x20,

    /* U+007D "}" */
    0x7a, 0x1, 0xb9, 0x74, 0xa, 0x60, 0x88, 0x11,
    0x61, 0x1, 0xb8, 0xe0, 0x62, 0x7, 0x98, 0x60,
    0x62, 0x86, 0x3, 0xc4, 0x8, 0xa1, 0xc0, 0x98,
    0x40, 0x62, 0x8, 0x1e, 0xe0, 0x6a, 0x8, 0x7,
    0xc9, 0x20, 0x1c, 0x2c, 0x4,

    /* U+007E "~" */
    0x7b, 0x18, 0xb, 0x9, 0x4f, 0xcc, 0xfe, 0x60,
    0x28
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 59, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 69, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 106, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 22, .adv_w = 177, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 165, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 128, .adv_w = 201, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 184, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 59, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 237, .adv_w = 92, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 268, .adv_w = 92, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 295, .adv_w = 114, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 312, .adv_w = 157, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 334, .adv_w = 68, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 340, .adv_w = 123, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 344, .adv_w = 69, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 130, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 386, .adv_w = 168, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 119, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 158, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 161, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 167, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 159, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 161, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 168, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 158, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 761, .adv_w = 70, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 73, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 785, .adv_w = 129, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 812, .adv_w = 145, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 825, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 850, .adv_w = 144, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 215, .box_w = 13, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 956, .adv_w = 177, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 999, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 175, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1083, .adv_w = 180, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1111, .adv_w = 159, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1134, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1154, .adv_w = 179, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1201, .adv_w = 187, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1223, .adv_w = 77, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1230, .adv_w = 167, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1256, .adv_w = 162, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1291, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1301, .adv_w = 208, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1340, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1373, .adv_w = 178, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1418, .adv_w = 169, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1449, .adv_w = 178, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1493, .adv_w = 172, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1529, .adv_w = 164, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1575, .adv_w = 155, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1590, .adv_w = 183, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1615, .adv_w = 173, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1662, .adv_w = 209, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1718, .adv_w = 169, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1764, .adv_w = 170, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1799, .adv_w = 160, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1834, .adv_w = 91, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1845, .adv_w = 130, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1881, .adv_w = 91, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1892, .adv_w = 115, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 1900, .adv_w = 190, .box_w = 12, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1905, .adv_w = 94, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 1910, .adv_w = 146, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1940, .adv_w = 157, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1973, .adv_w = 146, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2004, .adv_w = 157, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2039, .adv_w = 148, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2069, .adv_w = 106, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2091, .adv_w = 158, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2133, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2157, .adv_w = 68, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2166, .adv_w = 71, .box_w = 5, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 2182, .adv_w = 141, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2211, .adv_w = 68, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2216, .adv_w = 231, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2242, .adv_w = 160, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2260, .adv_w = 152, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2290, .adv_w = 157, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2325, .adv_w = 157, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2362, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2375, .adv_w = 136, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2404, .adv_w = 110, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2427, .adv_w = 159, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2446, .adv_w = 147, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2476, .adv_w = 210, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2522, .adv_w = 144, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2553, .adv_w = 147, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2591, .adv_w = 136, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2616, .adv_w = 102, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2651, .adv_w = 64, .box_w = 2, .box_h = 19, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2657, .adv_w = 102, .box_w = 7, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2694, .adv_w = 143, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 7,
    3, 13,
    3, 14,
    3, 15,
    3, 16,
    3, 21,
    3, 23,
    3, 27,
    3, 28,
    3, 33,
    4, 24,
    7, 3,
    7, 8,
    8, 7,
    8, 13,
    8, 14,
    8, 15,
    8, 16,
    8, 21,
    8, 23,
    8, 27,
    8, 28,
    8, 33,
    9, 9,
    9, 17,
    9, 18,
    9, 19,
    9, 21,
    9, 22,
    9, 23,
    9, 25,
    9, 26,
    9, 92,
    10, 10,
    10, 62,
    10, 94,
    12, 18,
    12, 19,
    12, 20,
    12, 24,
    13, 3,
    13, 8,
    13, 14,
    13, 17,
    13, 18,
    13, 21,
    13, 23,
    13, 24,
    13, 25,
    13, 26,
    14, 3,
    14, 8,
    14, 18,
    14, 19,
    14, 20,
    14, 22,
    14, 24,
    14, 26,
    15, 3,
    15, 8,
    15, 14,
    15, 17,
    15, 18,
    15, 21,
    15, 23,
    15, 24,
    15, 25,
    15, 26,
    16, 16,
    16, 17,
    16, 18,
    16, 19,
    16, 21,
    16, 22,
    16, 23,
    16, 25,
    16, 26,
    17, 10,
    17, 13,
    17, 15,
    17, 16,
    17, 61,
    17, 62,
    17, 94,
    19, 10,
    19, 12,
    19, 14,
    19, 21,
    19, 61,
    19, 62,
    19, 94,
    20, 16,
    20, 18,
    20, 61,
    21, 3,
    21, 8,
    21, 10,
    21, 13,
    21, 15,
    21, 16,
    21, 18,
    21, 24,
    21, 26,
    21, 61,
    21, 62,
    21, 94,
    22, 13,
    22, 15,
    22, 16,
    22, 18,
    22, 61,
    23, 3,
    23, 8,
    23, 10,
    23, 16,
    23, 18,
    23, 24,
    23, 61,
    23, 62,
    23, 94,
    24, 4,
    24, 12,
    24, 13,
    24, 14,
    24, 15,
    24, 16,
    24, 21,
    24, 23,
    24, 30,
    25, 10,
    25, 13,
    25, 15,
    25, 16,
    25, 61,
    25, 62,
    25, 94,
    26, 10,
    26, 13,
    26, 14,
    26, 15,
    26, 16,
    26, 20,
    26, 21,
    26, 23,
    26, 61,
    26, 62,
    26, 94,
    27, 3,
    27, 8,
    28, 3,
    28, 8,
    30, 24,
    33, 3,
    33, 8,
    60, 9,
    60, 17,
    60, 18,
    60, 19,
    60, 21,
    60, 22,
    60, 23,
    60, 25,
    60, 26,
    60, 92,
    61, 3,
    61, 8,
    61, 17,
    61, 18,
    61, 20,
    61, 21,
    61, 22,
    61, 23,
    61, 24,
    61, 25,
    61, 26,
    61, 61,
    92, 9,
    92, 17,
    92, 18,
    92, 19,
    92, 21,
    92, 22,
    92, 23,
    92, 25,
    92, 26,
    92, 92,
    94, 10,
    94, 62,
    94, 94
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -4, -25, -13, -25, -17, -12, -9, -2,
    -2, -3, -3, -8, -8, -4, -25, -13,
    -25, -17, -12, -9, -2, -2, -3, -2,
    -7, -8, -3, -10, -4, -11, -6, -4,
    -6, -2, -1, -2, -6, -6, -2, -13,
    -25, -25, -9, -3, -17, -3, -2, -8,
    -2, -11, -13, -13, -8, -8, -4, -2,
    -14, -2, -25, -25, -9, -3, -17, -3,
    -2, -8, -2, -11, -56, -6, -2, -5,
    -15, -3, -14, -6, -2, -7, -3, -3,
    -6, -6, -6, -6, -3, -3, -4, -2,
    -5, -2, -2, -2, -4, -1, -6, -6,
    -7, -3, -3, -1, -6, -5, -2, -9,
    -6, -6, -2, -2, -2, -3, -1, -8,
    -8, -9, -2, -6, -8, -10, -7, -8,
    -2, -7, -16, -8, -16, -17, -8, -7,
    -2, -6, -2, -2, -2, -6, -5, -5,
    -5, -15, -3, -15, -14, -3, -3, -2,
    -3, -4, -4, -2, -2, -2, -2, -4,
    -2, -2, -1, -6, -7, -3, -8, -3,
    -8, -5, -3, -5, -17, -17, -6, -16,
    -2, -3, -2, -4, -7, -2, -9, -56,
    -2, -6, -7, -2, -9, -3, -10, -5,
    -3, -6, -6, -5, -6
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 189,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 3,
    .kern_classes = 0,
    .bitmap_format = 1
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t subtitle = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 20,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if SUBTITLE*/

