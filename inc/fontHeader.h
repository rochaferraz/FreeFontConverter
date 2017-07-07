//
// Created by Douglas Rocha Ferraz on 16/06/17.
//

#ifndef FONTHEADER_H
#define FONTHEADER_H
#define CHARMAP_FIRST_CHAR      0x20
#define CHARMAP_NUMBER_OFFSET   0x30
#define CHARMAP_LAST_CHAR       0xFF
#include <stdint.h>


/// glyphs do not store the whole character. They crop all white borders around non-zero values. Thus, a vertical
/// column might have a char_width 5px, but a glyph_width 1px.
typedef struct glyph {
    /// pointer to actual data
    uint8_t* data;
    /// height of the glyph symbol
    uint16_t glyphHeight;
    /// width of the char
    uint16_t charWidth;
    /// number of bytes taken by each row, including eventual padding
    uint16_t byteWidth;
    /// number white lines above glyph when placing character
    uint16_t glyphLineOffset;
    /// number of white columns before glyph when placing character
    int8_t glyphColumnOffset;
} glyph_t;


typedef struct font {
    /// points to the firts char of the font structure
    glyph_t        glyphs[CHARMAP_LAST_CHAR-CHARMAP_FIRST_CHAR+1];
    /// number of bits per pixel on font. 1, 2, 4 or 8
    uint8_t        bitsPerPixel;
    /// height of characters, including white lines
    int16_t        charHeight;
} font_t;

#endif //FONTHEADER_H
