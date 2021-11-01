#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE,  WON, LOST};
int roll();

int main()
{
    srand(time(NULL));

    int mypt;
    enum Status gameStatus;
    int sum = roll();

    switch (sum)
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;

    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    
    default:
        gameStatus = CONTINUE;
        mypt = sum;
        printf("Point is %d\n", mypt);
        break;
    }

    while (CONTINUE == gameStatus)
    {
        sum = roll();
        if (sum == mypt)
        {
            gameStatus = WON;
        }
        else
        {
            if (7 == sum)
            {
                gameStatus = LOST;
            }
        }  
    }

    if (WON == gameStatus)
    {
        puts("Player wins");
    }
    else
    {
        puts("Player loses");
    }
}

int roll()
{
    int d1 = 1 + (rand() % 6);
    int d2 = 1 + (rand() % 6);
    printf("PLayer rolled %d + %d = %d\n", d1, d2, d1 + d2);
    return d1 + d2;
}