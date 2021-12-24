#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPtr;

    if((fPtr = fopen("file1.txt", "w")) == NULL)
    {
        puts("File could not be opened");
    }
    else
    {
        puts("Enter something, EOF to end ");
        char s[100];
        scanf("%s", s);
        while (!feof(stdin))
        {
            fprintf(fPtr, "%s", s);
            printf("Create a new one ");
            scanf("%s", s);
        }
        fclose(fPtr);
    }
}