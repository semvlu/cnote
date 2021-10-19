#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;

    for (a = 1; a < 500; a++)
    {
        for (b = a + 1; b < 500; b++)
        {
            for (c = b + 1; c <= 500; c++)
            {
                if (pow(a,2) + pow(b,2) == pow(c,2))
                {
                    printf("%d %d %d\n", a,b,c);
                }    
            }  
        }
    }
}