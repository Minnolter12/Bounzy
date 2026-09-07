#include <raylib.h> 

#include "../include/ball.h"
#include "../include/config.h"

#define DEBUG_MODE 1


int main(void) {

    ScreenConfig screen = { 1000, 1000 };

    InitWindow(
        screen.width, 
        screen.height, 
        "Bounzy"
    );

    SetTargetFPS(60);

    Ball gameBall = {
        .radius = 8,
        .restitution = 0.89,
        .position = {
            0.0, 0.0
        },
        .velocity = { 
            0.0, 0.0 
        },
        .state = BALL_NOT_SPAWNED, 
    };

    while (!WindowShouldClose()) {

        if (
            IsMouseButtonPressed(MOUSE_BUTTON_RIGHT) &&
            gameBall.state == BALL_NOT_SPAWNED
        ) {
            Vector2 mouse_position = GetMousePosition();

            if (
                mouse_position.x < screen.width &&
                mouse_position.y < screen.height
            ) {
                gameBall.state = BALL_IDLE;
                gameBall.position = mouse_position;
            }
        }

        BeginDrawing();

            ClearBackground(RAYWHITE);

            update_and_draw_ball(&gameBall, screen);

        
        EndDrawing();
    }

    CloseWindow();

    return 0;
}