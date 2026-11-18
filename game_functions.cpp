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

void Task2()
{
    const float A = 150;
    static float theta = 0;
    float y; 
    float x;

    for (x = 0; x < GetScreenWidth(); x += 1)
    {
        y = A * sin(0.01 * x + theta) + GetScreenHeight() / 2;
        DrawCircle(x, y, 2, GREEN);
    }
    theta += 0.01f;

    DrawLine(GetScreenWidth() / 2, 0, GetScreenWidth() / 2, GetScreenHeight(), WHITE);
    DrawLine(0, GetScreenHeight() / 2, GetScreenWidth(), GetScreenHeight() / 2, WHITE);

}

void Task3(float A, float c)
{
    static float theta = 0;
    float y; 
    float x;

    

    for (x = 0; x < GetScreenWidth(); x += 1)
    {
        y = A * sin(0.01 * x + theta + c) + GetScreenHeight() / 2;
        DrawCircle(x, y, 2, GREEN);
    }
    theta += 0.01f;

    DrawLine(GetScreenWidth() / 2, 0, GetScreenWidth() / 2, GetScreenHeight(), WHITE);
    DrawLine(0, GetScreenHeight() / 2, GetScreenWidth(), GetScreenHeight() / 2, WHITE);
}

void Task4(float r)
{
    float c_x = GetScreenWidth() / 2;
    float c_y = GetScreenHeight() / 2;
    static float theta = 0;

    float x = c_x + r * cos(theta);
    float y = c_y - r * sin(theta);

    DrawCircle(c_x, c_y, 10, WHITE);

    DrawCircleLines(GetScreenWidth() / 2, GetScreenHeight() / 2, r, WHITE);

    DrawCircle(x, y, 5, GREEN);

    DrawLine(GetScreenWidth() / 2, 0, GetScreenWidth() / 2, GetScreenHeight(), WHITE);
    DrawLine(0, GetScreenHeight() / 2, GetScreenWidth(), GetScreenHeight() / 2, WHITE);

    theta += 0.01f;

}

void Task5(float r)
{
    float c_x = GetScreenWidth() / 2;
    float c_y = GetScreenHeight() / 2;
    static float theta = 0;

    float x_1 = c_x + r * cos(theta);
    float y_1 = c_y - r * sin(theta);

    float x_2 = c_x + r * cos(theta + 0.5f * PI);
    float y_2 = c_y - r * sin(theta + 0.5f * PI);

    float x_3 = c_x + r * cos(theta + PI);
    float y_3 = c_y - r * sin(theta + PI);

    float x_4 = c_x + r * cos(theta + (1.5f * PI));
    float y_4 = c_y - r * sin(theta + (1.5f * PI));

    DrawCircle(c_x, c_y, 10, WHITE);

    DrawCircle(x_1, y_1, 5, RED);
    DrawCircle(x_2, y_2, 5, GREEN);
    DrawCircle(x_3, y_3, 5, BLUE);
    DrawCircle(x_4, y_4, 5, YELLOW);

    DrawLine(x_1, y_1, x_2, y_2, WHITE);
    DrawLine(x_2, y_2, x_3, y_3, WHITE);
    DrawLine(x_3, y_3, x_4, y_4, WHITE);
    DrawLine(x_4, y_4, x_1, y_1, WHITE);

    theta += 0.01f;
}

void Task6(float r)
{
    const float A = 150;
    static float theta = 0;

    float y; 
    float x;

    float c_x = GetScreenWidth() / 2;
    float c_y = GetScreenHeight() / 2;

    

    float x_1 = c_x + r * cos(theta);
    float y_1 = c_y - r * sin(theta);

    float x_2 = c_x + r * cos(theta + 0.5f * PI);
    float y_2 = c_y - r * sin(theta + 0.5f * PI);

    float x_3 = c_x + r * cos(theta + PI);
    float y_3 = c_y - r * sin(theta + PI);

    float x_4 = c_x + r * cos(theta + (1.5f * PI));
    float y_4 = c_y - r * sin(theta + (1.5f * PI));

    for (x = 0; x < GetScreenWidth(); x += 1)
    {
        y = A * sin(0.01 * x + theta) + GetScreenHeight() / 2;
        DrawCircle(x, y, 2, GREEN);
    }



    DrawCircle(c_x, c_y, 10, WHITE);

    DrawCircle(x_1, y_1, 5, RED);
    DrawCircle(x_2, y_2, 5, GREEN);
    DrawCircle(x_3, y_3, 5, BLUE);
    DrawCircle(x_4, y_4, 5, YELLOW);

    DrawLine(x_1, y_1, x_2, y_2, WHITE);
    DrawLine(x_2, y_2, x_3, y_3, WHITE);
    DrawLine(x_3, y_3, x_4, y_4, WHITE);
    DrawLine(x_4, y_4, x_1, y_1, WHITE);

    theta += 0.01f;
}