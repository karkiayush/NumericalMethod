#include <stdio.h>
#include <conio.h>

int main()
{
    float xr, x[100], y[100], num, den, sum = 0;
    int i, j, n;

    printf("Enter the value of number of terms of the table: ");
    scanf("%d", &n);

    printf("Enter the value to be found: ");
    scanf("%f", &xr);

    printf("Enter the respective value of x & y\n");
    for (i = 0; i < n; i++)
    {
        printf("X[%d]=", i);
        scanf("%f", &x[i]);

        printf("Y[%d]=", i);
        scanf("%f", &y[i]);
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        num = 1;
        den = 1;
        for (j = 0; j < n; j++)
        {
            if (j != i)
            {
                num = num * (xr - x[j]);

                den = den * (x[i] - x[j]);
            }
        }
        sum = sum + ((num / den) * y[i]);
    }

    printf("The required value for x = %f is %f", xr, sum);
    return 0;
}