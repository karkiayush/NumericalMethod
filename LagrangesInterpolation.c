#include <stdio.h>
#include <math.h>

int n;

void functionGenerator(float xArray[], float yArray[], float x);

int main()
{
    printf("Enter the number of data: ");
    scanf("%d", &n);

    float xArr[n], yArr[n];

    printf("Enter the value of x and its corresponding value of y\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f %f", &xArr[i], &yArr[i]);
    }

    float xVal;
    printf("Enter the value of x for which y has to be found out: ");
    scanf("%f", &xVal);
    functionGenerator(xArr, yArr, xVal);

    return (0);
}

void functionGenerator(float xArray[], float yArray[], float x)
{
    float result = 0;

    for (int i = 0; i < n; i++)
    {
        float term = yArray[i];

        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                term = term * (x - xArray[j]) / (xArray[i] - xArray[j]);
            }
        }

        result += term;
    }

    printf("Interpolated value of y at x = %f is %f\n", x, result);
}
