#include <stdio.h>
double max (double q,double r,double s,double t,double u,double v,double w,double x, double y, double z);

int main()
{
    double a,b,c,d,e,f,g,h,i,j;
    double k;
    double ar[] = {a,b,c,d,e,f,g,h,i,j};
    int cntr = 0;
    while (cntr < 10)
    {
        scanf("%lf", &ar[cntr]);
        cntr++;
    }
    for (int cp = 0; cp < 10; cp++)
    {
        for (int cp2 = cp + 1; cp2 < 10; cp2++)
        {
            if (ar[cp2] > ar[cp])
            {
                k = ar[cp2];
                ar[cp2] = ar[cp];
                ar[cp] = k;
            }
        }   
    }
    printf("%.2lf\n%.2lf\n", ar[0], ar[1]);
}