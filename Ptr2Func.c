#include <stdio.h>

void func1(int a);
void func2(int a);
void func3(int a);
int main()
{
    void (*f[3])(int) = {func1, func2, func3};
    printf("Enter a number between 0 & 2, 3 to end: ");
    int cho;
    scanf("%d", &cho);
    
    while (cho >= 0 && cho <3)
    {
        (*f[cho])(cho);
        printf("Enter a number between 0 & 2, 3 to end: ");
        scanf("%d", &cho);
    }
    puts("End of program.");
}
void func1(int a)
{
    printf("This is the 1st function\n");
}
void func2(int a)
{
    printf("This is the 2nd function\n");
}
void func3(int a)
{
    printf("This is the 3rd function\n");
}