/*
Guass Jacobi and Guass Seidal Method
It is named after the name of two greates scientist Jacobi & Seidal.
*/

// Coding the Guass Jacobi Method
#include <stdio.h>
#include <math.h>

#define f1(x, y, z) (15 - y - z) / 10
#define f2(x, y, z) (24 - x - z) / 10
#define f3(x, y, z) (15 - x - y) / 10

int main()
{
    float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, e1, e2, e3, e;
    int i = 1;

    printf("Enter the error allowed: ");
    scanf("%d", &e);
    do
    {
        x1 = f1(x0, y0, z0);
        y1 = f2(x0, y0, z0);
        z1 = f3(x0, y0, z0);

        e1 = fabs(x0 - x1);
        e2 = fabs(y0 - y1);
        e3 = fabs(z0 - z1);

        i++;

        x0 = x1;
        y0 = y1;
        z0 = z1;

    } while (e1 < e || e2 < e || e3 < e);

    printf("The solution is: x=%f, y=%f, z=%f\n", x1, y1, z1);

    return 0;
}