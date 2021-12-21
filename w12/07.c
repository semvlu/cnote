#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
//runtime error
int main()
{
    char a[200];
    char b[10];
    char *searchPtr;
    char *NsearchPtr;
    fgets(a, sizeof(a), stdin);
    scanf("%s", b);
    searchPtr = strstr(a, b);
    while (searchPtr+1 != NULL)
    {
        NsearchPtr = strstr(searchPtr, b);
        if (NsearchPtr != NULL)
        {
            printf("%s", NsearchPtr);
        }
        char *sep = strtok(a, " ");
        searchPtr += strlen(sep);
    }
}