#include "game_functions.h"




int main()
{
    const int screenWidth = 1280;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "Trigonometry");
    SetTargetFPS(60);

    float A = 150;
    float c = 0;

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);

        //Task1()

        //Task2();

        if (IsKeyDown(KEY_UP))
        {
            A++;
        }

        if (IsKeyDown(KEY_DOWN))
        {
            A--;
        }

        if (IsKeyDown(KEY_LEFT))
        {
            c -= 0.03f;
        }

        if (IsKeyDown(KEY_RIGHT))
        {
            c += 0.01f;
        }

        Task3(A, c);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
