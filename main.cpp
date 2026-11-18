#include "game_functions.h"




int main()
{
    const int screenWidth = 1280;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "Trigonometry");
    SetTargetFPS(60);

    //Task 3
    //float A = 150;
    //float c = 0;


    //Task 4
    //float r = 150;

    //Task 5
    //float r = 150;

    //Task 6
    float r = 150;

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);

            //Task1()

            //Task2();

        /*
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
        */

        /*

            if (IsKeyDown(KEY_UP))
            {
                r++;
            }

            if (IsKeyDown(KEY_DOWN))
            {
                r--;
            }

            Task4(r);
        */

        /*
            if (IsKeyDown(KEY_UP))
            {
                r++;
            }

            if (IsKeyDown(KEY_DOWN))
            {
                r--;
            }

            Task5(r);
        */

            if (IsKeyDown(KEY_UP))
            {
                r++;
            }

            if (IsKeyDown(KEY_DOWN))
            {
                r--;
            }

            Task6(r);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
