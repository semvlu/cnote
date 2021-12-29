#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f1;
    FILE *f2;
    FILE *ff;
    if ((f1 = fopen("file1.txt", "r+")) == NULL)
    {
        
    }
    else
    {
        if ((f2 = fopen("file2.txt", "r+")) == NULL)
        {
            
        }
        else
        {
            if ((ff = fopen("result.txt", "w")) == NULL)
            {
                /* code */
            }
            else
            {
                char _f1[300];
                char _f2[300];
                fgets(_f1, 300, f1);
                fgets(_f2, 300, f2);
                fprintf(ff, "%s%s", _f1, _f2);
                fclose(f1);
                fclose(f2);
                fclose(ff);  
            } 
        }
    }
}