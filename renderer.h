#ifndef _renderer_h
#define _renderer_h

#include <stdint.h>

#include "buffer.h"
#include "block.h"


typedef struct {
    Buffer *buffer;

    unsigned char color_mode;

    unsigned char color;

    unsigned int left_wall, right_wall;
    unsigned int row_floor, row_line_counter, row_score, row_level;
} Renderer;

typedef enum {
    EMPTY,
    FILL_WALL,
    FILL_FLOOR,
    GAMEOVER_0 = 101,
    GAMEOVER_1 = 102,
    GAMEOVER_2 = 103,
    GAMEOVER_3 = 104,
} BUFFER_FILL_TYPE;

typedef enum {
    XTERM_GRAY       = 30,
    XTERM_RED        = 31,
    XTERM_GREEN      = 32,
    XTERM_YELLOW     = 33,
    XTERM_BLUE       = 34,
    XTERM_PURPLE     = 35,
    XTERM_CYAN       = 36,
    XTERM_WHITE      = 37,

    XTERM_256_WHITE  = 254,
    XTERM_256_GRAY   = 240,
    XTERM_256_RED    = 34,
    XTERM_256_GREEN  = 112,
    XTERM_256_YELLOW = 226,
    XTERM_256_BLUE   = 27,
    XTERM_256_PURPLE = 129,
    XTERM_256_CYAN   = 45,
    XTERM_256_ORANGE = 166,
} COLOR_CODE;

Renderer *Renderer_create(unsigned int, unsigned int, unsigned char);
void Renderer_destroy(Renderer *);

void Renderer_draw_game(Renderer *, Block *, Block *, unsigned int, unsigned int, unsigned int, uint8_t);
void Renderer_draw_game_border(Renderer *);
void Renderer_draw_game_over(Renderer *, unsigned int, unsigned int, unsigned int);
void Renderer_draw_block(Renderer *, Block *);
void Renderer_erase_block(Renderer *, Block *);
void Renderer_draw_pause_message(Renderer *);
void Renderer_erase_pause_message(Renderer *);

void Renderer_set_color(Renderer *, COLOR);

void Renderer_present_buffer(Renderer *);

#endif
