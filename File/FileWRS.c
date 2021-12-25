#include <stdio.h>
int main()
{
    char name[20];
    FILE *f;

    if ((f = fopen( "file.txt" , "w+")) == NULL)
    {
        puts("file could not be opened");
    }
    else
    {
        int num = 70;
        fwrite(&num, sizeof(num), 1, f);
        int res = fread(&num, sizeof(num), 1, f);
        printf("%d", res);
        fseek(f, num * sizeof(num), SEEK_SET);
        int num1 = 88;
        fwrite(&num, sizeof(num), 1, f);
        fclose(f);
    }
}