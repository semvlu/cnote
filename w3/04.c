#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 100; i <= 999; i++)
    {
        int i1, i2, i3, j, j1,j2, k;
        i1 = i / 100;
        j =  i - (100 * i1);
        i2 = i / 10;
        i3 = j % 10;
        j1 = j - i3;
        j2 = j1/ 10;
        k  = i - (10 * i2);
        // i1 百位數, j2 十位數, k 個位數

        if (i == pow(i1, 3) + pow(j2, 3) + pow(k, 3))
        {
            printf("%d\n", i);
        }
        else
        {
            continue;
        }
    }
}