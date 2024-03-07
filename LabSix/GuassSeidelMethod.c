#include <stdio.h>
#include <math.h>

#define f1(x, y, z) (15 - y - z) / 10
#define f2(x, y, z) (24 - x - z) / 10
#define f3(x, y, z) (15 - x - y) / 10

int main()
{
    int iterCounter = 1;
    float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, e1, e2, e3, e;

    printf("Enter the error allowed: ");
    scanf("%f", &e); // corrected the format specifier to %f for float

    do
    {
        iterCounter++;
        x1 = f1(x0, y0, z0);
        y1 = f2(x1, y0, z0); // use the updated value of x1
        z1 = f3(x1, y1, z0); // use the updated values of x1 and y1

        e1 = fabs(x0 - x1);
        e2 = fabs(y0 - y1);
        e3 = fabs(z0 - z1);

        x0 = x1;
        y0 = y1;
        z0 = z1;

    } while (e1 > e || e2 > e || e3 > e);

    printf("The solution is: x=%f, y=%f, z=%f which is generated in iteration of %d", x1, y1, z1, iterCounter);

    return 0;
}
