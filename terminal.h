#ifndef _terminal_h
#define _terminal_h

#include <termios.h>


struct termios origTermAttr, rawTermAttr;

void Terminal_begin_raw_mode(void);
void Terminal_end_raw_mode(void);

void Terminal_clear_screen(int);
void Terminal_set_cursor(int);
void Terminal_move_cursor(int, int);

void Terminal_set_color(int, int, int, int);
void Terminal_disable_color(void);

enum colorModes {
    XTERM     = 2,
    XTERM_256 = 4,
};

enum colorsAliases {
    NONE,
    GRAY,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    PURPLE,
    CYAN,
    WHITE,
    ORANGE,
};

enum colorCodes {
    XTERM_GRAY       = 30,
    XTERM_RED        = 31,
    XTERM_GREEN      = 32,
    XTERM_YELLOW     = 33,
    XTERM_BLUE       = 34,
    XTERM_PURPLE     = 35,
    XTERM_CYAN       = 36,
    XTERM_WHITE      = 37,

    XTERM_256_GRAY   = 240,
    XTERM_256_RED    = 34,
    XTERM_256_GREEN  = 160,
    XTERM_256_YELLOW = 226,
    XTERM_256_BLUE   = 27,
    XTERM_256_PURPLE = 129,
    XTERM_256_CYAN   = 45,
    XTERM_256_ORANGE = 166,
};

#endif
