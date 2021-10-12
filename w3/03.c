#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);

    for (i = 2; i <= a-1; i++)
    {
        if (a % i == 0)
        {
            printf("No\n");
            break;
        }
    }
    if (i == a)
    {
        printf("Yes\n");
    }
}