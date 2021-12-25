#include <stdio.h>
int main()
{
    FILE *f;
    if ((f = fopen("cli.txt", "r")) == NULL)
    {
        puts("File could not be found");
    }
    else
    {
        int acco, blnc;
        char name[20];
        printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
        fscanf(f, "%d%19s%d", &acco, name, &blnc);
        while (!feof(f))
        {
            printf("%-10d%-13s%d\n", acco, name, blnc);
            fscanf(f,"%d%19s%d", &acco, name, &blnc);
        }
        fclose(f);
    }
}