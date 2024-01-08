/*
Algorithm:

Step1: Start
Step2: Read n number of data
Step3: Read the value of Xi & Yi
Step4: initialize sumx=0 sumy=0 sumxy=0 sumxx=0
Step5: calculate required sum
Step6: Start


mod 3 -> 2 -> fill value of x and y -> AC -> shift+1 -> 3
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n;
    float x[20], y[20], sumX = 0, sumY = 0;
    float sumXX = 0, sumXY = 0, a, b;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("The value of x[%d] = ", i);
        scanf("%f", &x[i]);

        printf("The value of y[%d] = ", i);
        scanf("%f", &y[i]);
    }

    for (i = 0; i < n; i++)
    {
        sumX += x[i];
        sumY += y[i];
        sumXX += (x[i] * x[i]);
        sumXY += (x[i] * y[i]);
    }

    printf("\n i=%d\t sumx=%f\t sumy=%f\t sumxy=%f\t sumxx=%f\t", i, sumX, sumY, sumXX, sumXY);

    b = ((n * sumXY) - (sumX * sumY)) / ((n * sumXX) - (sumX * sumX));

    a = (sumY - (b * sumX)) / n;

    printf("\n The curve on straight line y=%fx+%f", a, b);
    return 0;
}