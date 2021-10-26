#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    scanf("%d", &i);

    for (int c = i; c >= 1; c--)
    {
        for (int d = c; d >= 1; d--)
        {
            printf("%d ", d);
        }

        for(int e = 2; e <= c; e++)
        {
            printf("%d ", e);
        }
        printf("\n");
    }
}
