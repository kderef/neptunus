#ifndef STATE_H
#define STATE_H

#include "../raywrapper.h"
#include <stdbool.h>

struct GameState {
    int window_width;
    int window_height;
    KeyboardKey last_key;
    float mouse_wheel_move;
    bool left_mouse_down;
    bool right_mouse_down;
};

static struct GameState state = {0};

void update_state() {
    state.left_mouse_down = IsMouseButtonDown(MOUSE_LEFT_BUTTON);
    state.right_mouse_down = IsMouseButtonDown(MOUSE_RIGHT_BUTTON);
    state.last_key = GetKeyPressed();
    state.mouse_wheel_move = GetMouseWheelMove();
}

#endif // STATE_H