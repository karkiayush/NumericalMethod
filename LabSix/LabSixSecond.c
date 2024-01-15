#include <stdio.h>
#include <math.h>

// Function prototypes
float f1(float y, float z);
float f2(float x, float z);
float f3(float x, float y);

int main()
{
    float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, e1, e2, e3, e;
    int i = 1;

    // Till how many decimal points we want the check to be done, it is provided
    printf("Enter the error allowed: ");
    scanf("%f", &e);

    do
    {
        x1 = f1(y0, z0);
        y1 = f2(x1, z0);
        z1 = f3(x1, y1);

        e1 = fabs(x0 - x1);
        e2 = fabs(y0 - y1);
        e3 = fabs(z0 - z1);
        i++;

        x0 = x1;
        y0 = y1;
        z0 = z1;

    } while (e1 > e || e2 > e || e3 > e);

    printf("The solution is: x=%f, y=%f, z=%f\n", x1, y1, z1);

    return 0;
}

// Function definitions
float f1(float y, float z)
{
    return (58 - (2 * y) - (3 * z)) / 45;
}

float f2(float x, float z)
{
    return (47 + (3 * x) - (2 * z)) / 22;
}

float f3(float x, float y)
{
    return (67 - (5 * x) - y) / 20;
}
