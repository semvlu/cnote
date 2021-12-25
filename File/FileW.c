#include <stdio.h>
int main()
{
    FILE *p;
    if ((p = fopen("test.txt","w")) == NULL)
    {
        puts("Could not be opened");
    }
    else
    {
        fprintf(p, "hello me");
    }
    fclose(p);
}