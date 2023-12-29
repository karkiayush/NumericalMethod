// Here we are doing the solution using the secant method

#include <math.h>
#include <stdio.h>
#define E 0.0001

float f(float x)
{
    return ( (3 * x) + sin(x) - exp(x));
}

int main()
{
    float x1 = 0, x2 = 0, x3 = 0;
    int i = 1;

    printf("Enter two points\n");
    scanf("%f%f", &x1, &x2);

    do
    {
        x3 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
        printf("\ni=%d\t x1=%f\t x2=%f\t x3=%f\t, f(x3)=%f\t", i, x1, x2, x3,
               f(x3));

        x1 = x2;
        x2 = x3;
        i++;
    } while (fabs(f(x3)) > E);
    printf("\nThe root is x3=%f", x3);
    return 0;
}

