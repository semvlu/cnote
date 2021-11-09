#include <stdio.h>

double power(double base, int exponent);

int main()
{
    double b;
    int e;
    scanf("%lf %d", &b, &e);
    printf("%.4lf", power(b, e));
}

double power(double base, int exponent)
{
    static double post = 1;
    for (size_t i = 0; i < exponent; i++)
    {
        post *= base;
    }
    return post;
}