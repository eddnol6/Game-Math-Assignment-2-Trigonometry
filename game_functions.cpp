#include "game_functions.h"

using namespace std;

void Task1()
{
    float c_x = GetScreenWidth() / 2;
    float c_y = GetScreenHeight() / 2;
    float r = 150;
    static float theta = 0;

    float x = c_x + r * cos(theta);
    float y = c_y - r * sin(theta);

    DrawCircle(c_x, c_y, 10, WHITE);

    DrawCircleLines(GetScreenWidth() / 2, GetScreenHeight() / 2, 150, WHITE);

    DrawCircle(x, y, 5, GREEN);

    DrawLine(GetScreenWidth() / 2, 0, GetScreenWidth() / 2, GetScreenHeight(), WHITE);
    DrawLine(0, GetScreenHeight() / 2, GetScreenWidth(), GetScreenHeight() / 2, WHITE);

    DrawLine(x, y, x + 1, GetScreenHeight() / 2, RED);
    DrawLine(x, y, GetScreenWidth() / 2, y - 1, BLUE);
    DrawLine(GetScreenWidth() / 2, GetScreenHeight() / 2, x, y, PURPLE);

    theta += 0.01f;

}