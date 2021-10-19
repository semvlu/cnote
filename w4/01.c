#include <stdio.h>
int main()
{
	for(int a = 0; a < 10; a++)
    {
		for(int b = 0; b <= a; b++)
        {
		   printf("%s", "*");
		}
		printf("\n");
	}
    printf("\n");

    for (int c = 0; c < 10; c++)
    {
        for (int d = c; d < 10; d++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    for (int e = 0; e < 10; e++)
    {
        for (int f = 0; f < e; f++)
        {
            printf("%s", " ");
        }
        for (int g = e; g < 10; g++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    for (int h = 0; h < 10; h++)
    {
        for (int i = h; i < 9; i++)
        {
            printf("%s", " ");
        }
        for (int j = 0; j <= h; j++)
        {
            printf("%s", "*");
        }
        printf("\n");        
    }  
}