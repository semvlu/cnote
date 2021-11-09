#include <stdio.h>
#include <stdlib.h>
enum Status {CONTINUE, WON, LOST};
int roll();

int main()
{
    srand(48763);
    int bankBalance = 1000;
    int w;
    int myPoint;
    enum Status gameStatus;


    while (bankBalance > 0)
    {
        int sum = roll(); 
        scanf("%d", &w);
        while (w > bankBalance)
        {
            printf("Overflow\n");
            scanf("%d", &w);
        }

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
            myPoint = sum;
            break;
        }
        while (CONTINUE == gameStatus)
        {
            sum = roll();
            if (sum == myPoint)
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
            bankBalance += w;
            printf("Win\n");
            printf("%d\n", bankBalance);
        }
        else
        {
            bankBalance -= w; 
            printf("Lose\n");
            printf("%d\n", bankBalance);
        }

        if (bankBalance <= 0)
        {
            printf("Busted\n");
            break;
        }
    }
}   

int roll()
{
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);
    return die1 + die2;
}
