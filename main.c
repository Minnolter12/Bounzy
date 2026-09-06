#include <raylib.h> 
#include "ball.h"
#include "config.h"


int main(void) {

    ScreenConfig screen = { 1000, 1000 };

    InitWindow(
        screen.width, 
        screen.height, 
        "Bounzy"
    );

    SetTargetFPS(60);

    const int speed = 10;

    Ball gameBall = {
        .position = {
            0.0f, 0.0f
        },
        .state = BALL_NOT_SPAWNED
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

            update_and_draw_ball(&gameBall, screen, speed);

        
        EndDrawing();
    }

    CloseWindow();

    return 0;
}