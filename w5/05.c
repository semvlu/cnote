#include <stdio.h>
#include <math.h>

int main()
{
    int s = 0;
    for (int a = 1; a < 7; a++)
    {
        printf("%d %d\n", 1, a+1);
        s++;
    }
    for (int b = 2; b < 7; b++)
    {
        printf("%d %d\n", 2, b+1);
        s++;
    }
    for (int c = 3; c < 7; c++)
    {
        printf("%d %d\n", 3, c+1);
        s++;
    }
    for (int d = 4; d < 7; d++)
    {
        printf("%d %d\n", 4, d+1);
        s++;
    }
    for (int e = 5; e < 7; e++)
    {
        printf("%d %d\n", 5, e+1);
        s++;
    }
    for (int f = 6; f < 7; f++)
    {
        printf("%d %d\n", 6, f+1);
        s++;
    }
    
    printf("%d", s);
}
