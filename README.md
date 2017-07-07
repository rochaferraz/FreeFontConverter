# Free Font Converter

![Sample Top](/sample/top_sample.png)

## What's this project

Free Font Converter generates *typography-quality* bitmap fonts optimized for 
embedded systems. Thus, it takes TrueType fonts (and many other formats) and 
converts its vector formats into bitmaps arrays -- that is, it rasterizes them.

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

This project is intended for embedded systems / firmware engineers, but may also
be used in gaming, where bitmap fonts are also extensively used by the GPU.

## Getting Started

Check the sample folder for an example using \*nix X11 system. The system itself is composed of just two files:

- src/main.c
- inc/fontHeader.h

## Contributing

Check our project development plan on Github's project pane. Then, pull the repository, improve it and push your suggestions!

## Contact

You may contact contributors directly via Github or Doug via the e-mail ![rochaferraz email](/sample/email.png).

## Samples
![Sample Image](/sample/sample_text.png)
