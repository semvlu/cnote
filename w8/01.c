#include <stdio.h>
long C(long n, long p);
int main()
{
    long a, b;
    scanf("%ld %ld", &a, &b);
    printf("%ld", C(a,b));
}

long C(long n, long p)
{
    int h,i;
    if (p == 0 || n == p)
    {
        return 1;
    }
    else
    {
        h = n - 1;
        i = p - 1; 
        return (C(h, p) + C(h,i));
    }
}