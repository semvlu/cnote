#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mul(int i, int j);

int main()
{
    int a, b, c, d;
    srand(48763);

    for (int i = 0; i < 10; i++)
    {
        a = (rand() % 10);
        b = (rand() % 10);
        printf("How much is %d times %d?\n", a, b);
        scanf("%d", &c);

        d = mul(a, b);
        while (c != d)
        {
            printf("No, Please try again.\n");
            scanf("%d", &c);
        }
        if (c == d)
        {
            printf("Very good!\n");
        }
    }
}

int mul(int i, int j)
{
    int k = i * j;
    return k;
}