#include <stdio.h>
#include <math.h>

int main()
{
    int n = 1;
    while (n < 30)
    {
        int p = pow(n,3);

        if (p >= 12000)
        {
            printf("%d\n", n); 
            break;
        }
        n++;
    }
}

