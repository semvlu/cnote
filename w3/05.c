#include <stdio.h>
int main()
{
    unsigned int a, b, c;
    scanf("%u%u%u", &a,&b,&c);
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

}