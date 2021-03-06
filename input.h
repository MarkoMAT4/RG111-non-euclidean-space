#ifndef INPUT_H_
#define INPUT_H_

#include <stdlib.h>
#include <stdbool.h>
#include <GL/glut.h>

#include "shared.h"

// Mouse Position
extern int mouse_x;
extern int mouse_y;

// Change in mouse position since last update
extern int mouse_dx;
extern int mouse_dy;

// Keyboard State
extern bool is_forward_pressed;
extern bool is_backward_pressed;
extern bool is_left_pressed;
extern bool is_right_pressed;

extern bool was_reset_pressed;

// Keyboard Event Handlers
extern void flush_keyboard();
extern void on_keyboard(unsigned char key, int m_x, int m_y);
extern void on_keyboard_up(unsigned char key, int m_x, int m_y);
extern void on_mouse_move(int m_x, int m_y);
extern void update_mouse();

#endif
