#include <cmath>
#include "raylib.h"

using namespace std;

void Task1()
{
    float c_x = GetScreenWidth / 2;
    float c_y = GetScreenHeight / 2;
    float r = 150;
    float theta = 0;

    float x = c_x + r * cos(theta);
    float y = c_y + r * sin(theta);

    DrawCircle(c_x, c_y, 5, WHITE)

}