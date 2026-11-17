#include "game_functions.h"




int main()
{
    const int screenWidth = 1280;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "Trigonometry");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);

        Task2();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
