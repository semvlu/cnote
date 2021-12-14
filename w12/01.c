#include <stdio.h>
void stringReverse (char *a); // recur func

int main()
{
    char a[200];
    scanf("%s", a);
    stringReverse(a);
    printf("\n");
}

void stringReverse (char *a)
{
    if ('\0' == a[0])
    {
        return;
    }
    else
    {
        stringReverse(&a[1]);
        putchar(a[0]);
    }
}