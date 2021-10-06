#include <stdio.h>
int main()
{
    int a, b, sum, dif,pro,quo,rem;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    sum=a+b;
    dif=a-b;
    pro=a*b;
    quo=a/b;
    rem=a%b;
    printf("sum=%d, difference=%d, product=%d, quotient=%d, remainder=%d\n",sum,dif,pro,quo,rem);
    return (0);
}