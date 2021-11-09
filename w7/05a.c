#include <stdio.h>
unsigned long long int fibonacci(unsigned int n);
int main()
{
    unsigned int a;
    scanf("%d", &a);
    printf("%llu", fibonacci(a));
}

unsigned long long int fibonacci(unsigned int n)
{
    unsigned long long f0 = 0, f1 = 1;
    unsigned long long fn;
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
    return fn;
    }
}
