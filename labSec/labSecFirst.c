// False position method
// Exam ma hamilai kuani pani method specify nagerema, use Secant method

// Program 1: Find the solution of the function f(x)=3x + sin(x)- exp(x) upto to
// 10^-4 using False position method

#include <math.h>
#include <stdio.h>
#define E 0.0001

float f(float x)
{
    return (3 * x + sin(x) - exp(x));
}

int main()
{
    float a = 0, b = 0, x = 6;
    int i = 1;

    do
    {
        printf("Enter two initial guess points\n");
        scanf("%f %f", &a, &b);
    } while (f(a) * f(b) > 0);

    do
    {
        x = (a * f(b) - b * f(a)) / (f(b) - f(a));
        printf("\ni=%d\t a=%f\t b=%f\t x=%f\t f(x)=%f\t", i, a, b, x, f(x));

        if (f(a) * f(b) < 0)
            b = x;
        else
            a = x;

        i++;

    } while (fabs(f(x)) > E);
    printf("\nThe root is x=%f", x);
    return 0;
}
