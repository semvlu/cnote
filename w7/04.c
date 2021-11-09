#include <stdio.h>
int lcm(int a, int b);

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", lcm(a,b));
}

int lcm(int a, int b)
{
    int i, gcd, lcm;

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        gcd = i;
        lcm = (a * b) / gcd;
    }
    return lcm;
}
