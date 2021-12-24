#include <stdio.h>
void rev(char *const sPtr);
int main()
{
    char a[200];
    fgets(a, sizeof(a), stdin);
    rev(a);
}
void rev(char *const sPtr)
{
    if ('\0' == sPtr[0])
    {
        return;
    }
    else
    {
        rev(&sPtr[1]);
        putchar(sPtr[0]);
    }
}