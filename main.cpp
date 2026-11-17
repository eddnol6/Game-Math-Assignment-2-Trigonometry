#include "game_functions.h"




int main()
{
    const int screenWidth = 1280;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "Trigonometry");
    SetTargetFPS(60);

    float A = 150;
    float c = 0;

            std::cout << "Input an amplitude: ";
            std::cin >> A;

            std::cout << "Input a constant: ";
            std::cin >> c;  

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);

        //Task1()

        //Task2();

        Task3(A, c);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
