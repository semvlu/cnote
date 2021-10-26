#include <stdio.h>
#include <math.h>

int max(int x, int y);
int main()
{
    int a, b;
    int max, counter;
    scanf("%d", &a);
    max = a;
    counter = 1;

    while (a != 0)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
            counter = 1;
        }
        else if (a == max)
        {
            counter += 1;
        }        
    }
    printf("%d\n", max);
    printf("%d\n", counter);
}

