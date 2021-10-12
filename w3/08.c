#include <stdio.h>
int main()
{
    int y, m, q;
    scanf("%d%d%d", &y, &m, &q);
    int j, k;
    int h;
    if (m ==1 || m==2)
    {
        j = (y-1) /100;
        k = (y-1) % 100;
        h = (q + (26 * (m + 13) / 10) + (5 * k / 4) + (j / 4) + (5 * j)) % 7;
    }
    else
    {
        j = y /100;
        k = y % 100;
        h = (q + (26 * (m + 1) / 10) + (5 * k / 4) + (j / 4) + (5 * j)) % 7;
    }

    switch (h)
    {
    case 0:
        printf("Saturday\n");
        break;

    case 1:
        printf("Sunday\n");
        break;

    case 2:
        printf("Monday\n");
        break;

    case 3:
        printf("Tuesday\n");
        break;

    case 4:
        printf("Wednesday\n");
        break;

    case 5:
        printf("Thursday\n");
        break;

    case 6:
        printf("Friday\n");
        break;
    
    default:
        break;
    }
}