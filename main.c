#include "raylib.h"

int main(void) {
    InitWindow(1920, 1080, "My First Raylib Game");

    SetTargetFPS(60);

    bool moving_right = true;
    bool moving_left = false;

    int player_x = 0;
    int speed = 10;

    while (!WindowShouldClose()) {

        BeginDrawing();

        ClearBackground(RED);

        if (moving_right) {
            player_x += speed;
            DrawCircle(player_x, 500, 15, BLACK);

            if (player_x == 1920) {
                moving_right = !moving_right;
                moving_left = true;
            }
        } else if (moving_left) {
            player_x -= speed;
            DrawCircle(player_x, 500, 30, BLACK);

            if (player_x == 0) {
                moving_left = !moving_left;
                moving_right = true;
            }
        }
        
        EndDrawing();
    }

    CloseWindow();

    return 0;
}