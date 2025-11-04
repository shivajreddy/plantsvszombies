#include "globals.hpp"
#include "raylib.h"
#include <string>

#include <stdio.h>

// Snake Game entry point
int main() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, GAME_NAME);
    SetWindowMinSize(400, 300);
    SetTargetFPS(GAME_FPS);

    // Load Assets
    Texture2D cabbage = LoadTexture("assets/plants/cabbage-pult.png");

    game_is_running = true;
    // Main game loop
    while (!WindowShouldClose() && game_is_running) {
        BeginDrawing();
        ClearBackground(BLACK);

        status_msg = "Cabbage id:" + std::to_string(cabbage.id);
        DrawText(status_msg.c_str(), 30, 30, 30, RED);

        DrawTexture(cabbage, 20, 20, WHITE);

        // TODO: Button Click
        // TODO: Plant Animation

        // --- INPUT LOGIC ---
        // if (IsKeyPressed(KEY_RIGHT))
        // snake.change_direction(Direction::Right); if (IsKeyPressed(KEY_LEFT))
        // snake.change_direction(Direction::Left); if (IsKeyPressed(KEY_UP))
        // snake.change_direction(Direction::Up); if (IsKeyPressed(KEY_DOWN))
        // snake.change_direction(Direction::Down);

        EndDrawing();
    }

    return 0;
}
