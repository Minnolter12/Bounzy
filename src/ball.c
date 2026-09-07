#include <raylib.h>
#include <math.h>
#include <stdio.h>

#include "../include/config.h"
#include "../include/ball.h"

#define DEBUG_MODE 1

void update_and_draw_ball(
    Ball* ball,
    ScreenConfig screen
) {
    switch (ball->state) {
        case (BALL_NOT_SPAWNED): break;

        case (BALL_IDLE): {
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                ball->state = BALL_MOVING;
            } break;
        }
            
    
        case (BALL_MOVING): {
            float gravity = 0.5;

            // 1. Apply gravity and move first
            ball->velocity.y += gravity;
            ball->position.y += (ball->velocity.y);

            // 2. Check collision AFTER moving
            if (ball->position.y >= screen.height) {
                ball->position.y = screen.height;

                ball->velocity.y = ((-fabsf(ball->velocity.y) * ball->restitution)); 

                ball->velocity.y -= (gravity * ball->restitution); 
            }
                
            break;
        }
        default: break;
    }

    #if DEBUG_MODE 
    {
        printf("vertical velocity: %.2f\n", ball->velocity.y);
        printf("radius of the ball: %d\n", ball->radius);
        printf("restitution = %.1f\n", ball->restitution);
    }
    #endif

    DrawCircle(
        (int)ball->position.x,
        (int)ball->position.y,
        (int)ball->radius, BLACK
    );
}