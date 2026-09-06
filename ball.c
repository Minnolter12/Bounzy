#include <raylib.h>
#include "config.h"
#include "ball.h"


void update_and_draw_ball(
    Ball* ball,
    ScreenConfig screen,
    int speed
) {
    switch (ball->state) {
        case (BALL_NOT_SPAWNED):
            break;

        case (BALL_IDLE):
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                ball->state = BALL_MOVING;
            }
            break;
            
        case (BALL_MOVING):
            if (ball->position.y < screen.height) {
                ball->position.y += speed;
            }
            break;
        }

    DrawCircle(
        (int)ball->position.x,
        (int)ball->position.y,
        10, BLACK
    );
}