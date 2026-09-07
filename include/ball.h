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
    int radius;
    float restitution;
    Vector2 position;
    Vector2 velocity;
    BallState state;
} Ball;

void update_and_draw_ball(
    Ball* ball,
    ScreenConfig screen
);

#endif