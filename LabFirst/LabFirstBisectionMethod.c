#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isFunctionalValuePositive(double X)
{
    double Fx = pow(X, 3) - (2 * X) - 5;
    if (Fx > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

double bisectionMethodCalculation(double Xu, double Xl, double tolerance)
{
    double X;
    while (fabs(Xu - Xl) >= tolerance)
    {

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

    printf("The root of the equation X^3 - 2X - 5 is: %lf", root);

    return 0;
}