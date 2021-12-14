#include <stdio.h>
#include <ctype.h>
#include <string.h>
int testPalindrome(char *a);

int main()
{
    char a[200];
    scanf("%s", a);
    if (testPalindrome(a) == 1)
        printf("True\n");
    else
        printf("False\n"); 
}

int testPalindrome(char *a)
{
    char b[200];
    
    if (isblank(a[0]))
    {
        /* code */
    }
    
    
    else
    {
        testPalindrome();
    } 
}