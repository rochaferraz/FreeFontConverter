# Free Font Converter

## What's this project

Free Font Converter generates typography-quality bitmap fonts optimized for 
embedded systems. Thus, it takes TrueType fonts (and many other formats) and 
converts its vector formats into bitmaps arrays, that is, it rasterizes them.

It than places the generated glyphs for each individual characters in a single
.h file.

This .h file may then be included in any system with small footprint for displaying 
high-quality text in small (and large) LCD/OLED screens, from small Arduino 
project to large, complex medical equipment interfaces.

## Features

 - 1, 2, 4 and 8-bit depth options
 - Glyphs are size-optimized, with no top/bottom/left/right white borders
 - Auto-kerning (future release)
 - Individual selection of generated glyph ranges (future release)
 - No font height limit
 - Font ouput as .h files
 - Available sample code for decoding font format on target
 - Enables simultaneous use of different font sizes and bit depth options 
   within same project

## Who's this project for

## Getting Started

## Contributing

## Samples
![Sample Image](/sample/sample_text.png)