#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int s = 0;
    srand(48763);
    int c = 1 + (rand() % 1000);
    scanf("%d", &a);

    while (s < 1000)
    {
        if (a < c)
        {
            printf("Low\n");
            s++;
        }
        else if (a > c)
        {
            printf("High\n");
            s++;
        }
        else if (a == c)
        {
            printf("Congratulations\n");
            char p;
            scanf(" %c", &p);
            if (p == 'y')
            {
                s = 0;
                c = 1 + (rand() % 1000);
            }
            else if (p == 'n')
            {
                break;
            } 
        }
        scanf("%d", &a);
    }
}