#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int iter = 0;
bool isFunctionalValuePositive(double X)
{
    double Fx = pow(X, 3) - (2 * X) - 5;
    return (Fx > 0);
}

double bisectionMethodCalculation(double Xu, double Xl, double tolerance)
{
    double X;
    while (fabs(Xu - Xl) >= tolerance)
    {
        iter++;
        X = (Xu + Xl) / 2;
        bool functionResult = isFunctionalValuePositive(X);

        if (functionResult == true)
        {
            Xu = X;
        }
        else
        {
            Xl = X;
        }
    }
    return X;
}

int main()
{
    double Xu, Xl, tolerance;

    printf("Enter the upper and lower value of x\n");
    scanf("%lf %lf", &Xu, &Xl);

    printf("Enter the tolerance: ");
    scanf("%lf", &tolerance);

    double root = bisectionMethodCalculation(Xu, Xl, tolerance);

    printf("The root of the equation X^3 - 2X - 5 is: %lf which is founded in total of %d iteration", root, iter);

    return 0;
}