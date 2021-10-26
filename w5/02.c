#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    int j = 2;
    scanf("%d", &i);
    while (j <= i)
    {
        while (i % j == 0)
        {
            printf("%d\n", j);
            i /= j;
            if (i % j != 0)
            {
                j++;
            }
        }
        if (i / j == 1 && i % j ==0)
        {
            printf("%d\n", j);
            break;
        }  
        if (i % j != 0)
        {
            j++;
        }
   
    }   
}
