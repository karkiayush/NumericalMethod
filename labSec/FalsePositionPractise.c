#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double functionalValue(double x)
{
    return pow(x, 3) - (2 * x) - 5;
    // return 3 * x + sin(x) - exp(x);
}


double calculateByFalsePosition(double a, double b, double tolerance)
{
    double root;
    double e = 0.0; // Initialize e before using it
    int iter = 0;
    double f;

    do
    {
        iter++;
        double c = functionalValue(a);
        double d = functionalValue(b);
        e = ((a * d) - (b * c)) / (d - c);
        f = functionalValue(e);

        if (f < 0)
        {
            a = e;
        }
        else
        {
            b = e;
        }
    } while (fabs(f) > tolerance);

    root = e;
    return root;
}

int main()
{
    // Here a = Xi-1, b=Xi and we gonna calculate Xi+1
    double a, b, tolerance;
    char equation[30] = "3x + sin(x) - exp(x)";
    printf("Enter two points where the root lies\n");
    scanf("%lf %lf", &a, &b);

    printf("Enter the tolerance: ");
    scanf("%lf", &tolerance);

    double root = calculateByFalsePosition(a, b, tolerance);
    printf("The root of the equation %s is: %lf", equation, root);
    return 0;
}