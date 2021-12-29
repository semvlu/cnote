#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void race();
int main()
{
    srand(time(NULL));
    race();
}

void race()
{
    printf("BANG !!!!!\n");
    printf("AND THEY'RE OFF !!!!!\n");
    int t = 1, h = 1;
    char tdist[71], hdist[71];
    while (t < 70 && h < 70)
    {
        if (t < 1)
            t = 1;
        if (h < 1)
            h = 1;
        int tm = (rand()%10 + 1);
        int hm = (rand()%10 + 1);
        switch (tm)
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            t += 3;
            printf("T Fast plod\n");
            break;
        case 6:
        case 7:
            t -= 6;
            printf("T Slip\n");
            break;
        case 8:
        case 9:
        case 10:
            t += 1;
            printf("T Slow plod\n");
            break;
        default:
            break;
        }
        switch (hm)
        {
        case 1:
        case 2:
            printf("H Sleep\n");
            break;
        case 3:
        case 4:
            h += 9;
            printf("H Big hop\n");
            break;
        case 5:
            h -= 12;
            printf("H Big slip\n");
            break;
        case 6:
        case 7:
        case 8:
            h += 1;
            printf("H Small hop\n");
            break;
        case 9:
        case 10:
            h -= 2;
            printf("H Small slip\n");
            break;
        default:
            break;
        }
        if (t == h)
        {
            printf("OUCH!!!\n");
        }
        else
        {
            char map[200];
            int dist = abs(t - h);
            char toDist[200];
            strncat(toDist, " ", dist);
            strncat(tdist, " ", t);
            strncat(hdist, " ", h);
            if (t > h)
                sprintf(map, "%sH%sT\n", hdist, toDist);
            else // t < h
                sprintf(map, "%sT%sH\n", hdist, toDist);
            printf("%s", map);
        }  
    }
    if (t >= 70 && h < 70)
        printf("TORTOISE WINS!!! YAY!!!\n");
    else if (h >= 70 && t < 70)
        printf("Hare wins. Yuch.\n");
    else
    {
        printf("It's a tie.\n");
        race();
    }
}