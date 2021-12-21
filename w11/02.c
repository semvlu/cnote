#include <stdio.h>
#include <stdlib.h>
#define CARDS 52
#define FACES 13
#define SUITS 4
void shuffle(unsigned int wDeck[SUITS][FACES]);

int main()
{
    int deck[SUITS][FACES]; // gen deck
    for (int i = 0; i < SUITS; i++)
    {
        for (int j = 0; j < FACES; j++)
        {
            deck[i][j] = (13*i) + j + 1;
        }
    }
    shuffle(deck);

    for (int i = 0; i < SUITS; i++)
    {
        for (int j = 0; j < FACES; j++)
        {
            if (j == 12)
            {
                printf("%d\n", deck[i][j]);
            }
            else
            {
                printf("%d ", deck[i][j]);
            } 
        }
    }
}

void shuffle(unsigned int wDeck[SUITS][FACES])
{
    int deck[SUITS][FACES]; // gen deck
    for (int i = 0; i < SUITS; i++)
    {
        for (int j = 0; j < FACES; j++)
        {
            deck[i][j] = (13 * i) + j + 1;
        }
    }

    int row;
    int column;
    int num;
    for (size_t i = 0; i < SUITS; i++)
    { 
        for (size_t j = 0; j < FACES; j++)
        {
            row = rand() % SUITS;
            column = rand() % FACES;
            num = (row + 1) * (column + 1);
            wDeck[i][j] = num;
        }
    }   
}