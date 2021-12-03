#include <stdio.h>
#include <string.h>
#define SI 6
int main()
{
    char a[70] = "It's ok right ";
    char b[] = "The end of history";
    char *h = "Happy New Year";
    char *n = "Happy New Month";

    char y[20];
    char z[SI];

    printf("%s\n", strcpy(y, a)); // copy string from a to y
    strncpy(z, a, SI - 1); // copy SI - 1 elem from a to z
    printf("%s\n", z);

    printf("%s\n", strcat(a, b)); // append b to a
    printf("%d\n", strncmp(h, n, 15)); // 'Y' = 'M' + 12
    printf("%s\n", strchr(b, 'e') ); // search char in string
    
    char str[] = "This is a string with 7 tokens";
    char *tokenPtr = strtok(str, " "); // tokens

    while (tokenPtr != NULL)
    {
        printf("%s\t", tokenPtr);
        tokenPtr = strtok(NULL, " ");
    }
    
}