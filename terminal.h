#ifndef TERMINAL_H
#define TERMINAL_H


typedef enum CURSOR_DIRECTION {
    CURSOR_UP,
    CURSOR_DOWN,
    CURSOR_RIGHT,
    CURSOR_LEFT,
} CURSOR_DIRECTION;

extern void Terminal_begin_raw_mode(void);
extern void Terminal_end_raw_mode(void);

extern void Terminal_clear_screen(int);

extern void Terminal_reset_cursor(int);
extern void Terminal_move_cursor(CURSOR_DIRECTION, int);

extern void Terminal_set_color(int, int, int);
extern void Terminal_disable_color(void);

#endif
