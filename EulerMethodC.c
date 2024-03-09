#include <stdio.h>
#include <math.h>

float differentialEquation(float x0, float y0)
{
    return (x0 + y0);
}

void eulerCalculation(float x0, float y0, float h, float x)
{
    float m = 0;
    while (x0 < x)
    {
        m = differentialEquation(x0, y0);
        y0 = y0 + (m * h);
        x0 = x0 + h;
    }

    printf("The approximate solution at x=%f is %f", x, y0);
}
int main()
{
    float x0 = 0, y0 = 1, h = 0.1, x = 1;

    eulerCalculation(x0, y0, h, x);
    return 0;
}
