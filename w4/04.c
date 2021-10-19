#include <stdio.h>
#include <math.h>
int main()
{
    double pi, pisum = 0.0;
    for (int i = 1; i <= 10; i++)
    {
        int j = 10000 * i;
        for (int k = 1; k <= j; k++)
        {
            pi = (4 * ((pow(-1, k+1)) / (2 * k - 1)));
            pisum += pi;
        } 
        printf("%.6lf\n", pisum);
        pisum = 0;
    }
}




