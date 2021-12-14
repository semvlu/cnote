#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char a[15], b[15], c[15], d[15], e[15], f[15];
    scanf("%s %s %s %s %s %s", a,b,c,d,e,f);

    int len = strlen(f);
    for (int i = 0; i < len; i++)
    {
        if (f[i] == '\"')
        {
            for (int j = i; j < len; j++)
            {
                f[j] = f[j+1];
            }
            len--;
            i--;
        }
    }
    
    char *wPtr[6] = {a,b,c,d,e,f};
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            char hold[15];
            if ( strcmp(wPtr[j], wPtr[j+1]) > 0 )
            {
                strcpy(hold, wPtr[j]);
                strcpy(wPtr[j], wPtr[j+1]);
                strcpy(wPtr[j+1], hold);
            }
        }
    }
    
    for (int i = 0; i < 6; i++)
    {
        if (i == 5)
        {
            printf("\"%s\"", wPtr[i]);
        }
        else
            printf("\"%s\",", wPtr[i]);
    }
}