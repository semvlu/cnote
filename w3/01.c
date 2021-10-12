#include <stdio.h>
int main()
{
    double e, f;
    scanf("%lf", &e);
    while (e != -1)
    {
        f = 200 + (e * 0.09);
        printf("%.2lf\n", f);
        scanf("%lf", &e);
    }
    
}