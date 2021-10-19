#include <stdio.h>
int main()
{
    int n, i;
    for (int a = 1; a < 1000; a++)
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
            printf("%d\n", a);
        }
        n = 1;
    }
}

