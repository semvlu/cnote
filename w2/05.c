#include <stdio.h>
int main()
{
    double x0, y0, x1, y1, x2, y2, out;
    scanf("%lf %lf %lf %lf %lf %lf", &x0, &y0, &x1, &y1, &x2, &y2);
    out = (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0);

    if (out > 0)
    {
        printf("left");
    }
    else if (out == 0)
    {
        printf("on");
    }
    else
    {
        printf("right");
    }
}