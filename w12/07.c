#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char a[200];
    char b[10];
    char *searchPtr;
    char *NsearchPtr;
    fgets(a, sizeof(a), stdin);
    scanf("%s", b);
    searchPtr = strstr(a, b);
    for (int i = 0; i < strlen(searchPtr); i++)
    {
        NsearchPtr = strstr(searchPtr, b);
        if (NsearchPtr != NULL)
        {

            printf("%s", NsearchPtr);
        }
        searchPtr += strlen(b);
    }  
}