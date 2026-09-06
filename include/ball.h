#ifndef BALL_H
#define BALL_H

#include <raylib.h>
#include "config.h"

typedef enum {
    BALL_IDLE,
    BALL_MOVING,
    BALL_NOT_SPAWNED
} BallState;

typedef struct {
    Vector2 position;
    BallState state;
} Ball;

void update_and_draw_ball(
    Ball* ball,
    ScreenConfig screen,
    int speed
);

#endif