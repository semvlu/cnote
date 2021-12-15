#include <stdio.h>
#include <ctype.h>
#include <string.h>
int testPalindrome(char a[200]);
// Right on local, WA on OJ
int main()
{
    char a[200];
    scanf("%s", a);
    if (testPalindrome(a) == 1)
        printf("True\n");
    else
        printf("False\n"); 
}

int testPalindrome(char a[200])
{
    int l = 0;
    int h = strlen(a) - 1;
    while (l < h) 
    {
        while (!isalnum(a[l]) && l<h) 
            l++;
        while (!isalnum(a[h]) && l<h)
            h--;
        if (tolower(a[l++]) != tolower(a[h--])) 
        {
            return 0;
        }
    }
    return 1;
}
