#include <stdio.h>
void isPerfect(int a);

int main()
{
    int k;
    for (k = 2; k < 1000; k++)
    {
        isPerfect(k);
    }
}

void isPerfect(int a)
{
    int sum = 0;
    int i;
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    if (sum == a)
    {
        printf("%d ", a);
        for (i = 1; i < a; i++)
        {
            if (a % i == 0)
            {
                printf("%d ", i);
            }
        }
        printf("\n");

    }
}