#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, o, j;
    for (int a = 1; a < 1200; a++)
    {
        for (i = 2; i <= a-1; i++)
        {
            if (a % i == 0)
            {
                n = 0;
                break;
            }
        }
        if (n != 0 && a == i)
        {
            int b = a + 2;
            for (j = 2; j <= b-1; j++)
            {
                if (b % j == 0)
                {
                    o = 0;
                    break;
                }                   
            }
            if (o != 0 && b == j)
            {
                printf("%d %d\n", a, b);
            }
            o = 1;            
        }          
        n = 1;
    }
}

