#include <stdio.h>
int isPrime(int a, int cntr);

int main()
{
    int a, b;
    scanf("%d", &a);
    b = isPrime(a, 2);
    if (b == 0)
    {
        printf("False\n");
    }
    else
        printf("True\n");
}

int isPrime(int a, int cntr)
{
    int f = 1;
    if (a % cntr == 0 && cntr < a)
    {
        f = 0;
        return 0;
    }

    else if (f == 1 && cntr < a)
    {
        cntr++;
        return isPrime(a, cntr);
    }
    else
    {
        return 1;
    }
    
}