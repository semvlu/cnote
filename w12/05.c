#include <stdio.h>
#include <string.h>

int main()
{
    char a[200], rev[200];
    gets(a);
    int len = strlen(a);
    int index = 0;
    int wInit = len - 1;
    int wEnd = len - 1;

    while(wInit > 0)
    {
        if(a[wInit] == ' ')
        {
            int i = wInit + 1;
            while(i <= wEnd)
            {
                rev[index] = a[i];
                i++;
                index++;
            }
            rev[index++] = ' ';

            wEnd = wInit - 1;
        }
        wInit--;
    }
    for(int j = 0; j <= wEnd; j++)
    {
        rev[index] = a[j];
        index++;
    }
    rev[index] = '\0'; 

    printf("%s\n", rev);
}