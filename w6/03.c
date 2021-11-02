#include <stdio.h>
int isEven(int a);

int main()
{
    int a;
    while (a != 0)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        printf("%d ", isEven(a));
    }
}

int isEven(int a)
{
    if (a == 0)
    {
        return 0;
    }
    
    else if (a % 2 == 0)
    {
        return 1;
    }
    else
    return 0;    
}
