#include <stdio.h>
int reverse(int number);

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", reverse(a));
}

int reverse(int number)
{
    int rev = 0;
    int rem;
    
    while (number != 0)
    {
        rem = number % 10;
        rev = rev * 10 + rem;
        number /= 10;
    }
    return rev;  
}