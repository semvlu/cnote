#include <stdio.h>
#include <math.h>

int main()
{
    int a = 1;
    double b, sb;

    while (a <= 999)
    {
        b = 1 / (sqrt(a) + sqrt(a+1));
        sb += b;
        a++;
    }
    printf("%.4f\n", sb);
 
}
