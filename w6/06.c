#include <stdio.h>
#include <math.h>
double newton(double x);

int main()
{
    double a;
    scanf("%lf", &a);

    printf("%.5lf", newton(a));
}

double newton(double x)
{
    static double y = 1.0;
    static double xdy, avg;

    for (int i = 0;; i++)
    {
        xdy = x / y;
        avg = (y + xdy) / 2;

        if (fabs(avg - y) >= 0.00001 * avg)
        {
            y = avg;
        }
        else
        {
            return avg;
            break;
        }
    }  
}
