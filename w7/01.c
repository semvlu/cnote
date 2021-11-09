#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int flip(int a);

int main()
{
    srand(48763);
    int ttlh = 0;
    int ttlt = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (flip(i) == 1)
        {
            printf("Heads\n");
            ttlh++;
        }
        else
        {
            printf("Tails\n"); 
            ttlt++;
        }
    }
    printf("%d %d", ttlh, ttlt);
}

int flip(int a)
{
    int f = (rand() % 2);
    if (f == 1)
    {
        return f;
    }
    else
        return 0;
}