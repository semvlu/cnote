#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES], const char *wFace[],
const char *wSuit[]);
int isHighCard();
int is1Pair();
int is2Pair();
int is3Jack();
int is4Aces();
int isFlush();
int isFullHouse();
int isStraight();
int isStraightFlush();

int main()
{
    unsigned int deck[SUITS][FACES] = {0};
    srand(time(NULL));
    shuffle(deck);

    const char *suit[SUITS] = {"H", "D", "C", "S"};
    const char *face[FACES] = 
    {"A", "2", "3", "4", "5",
     "6", "7", "8", "9", "10",
     "J", "Q", "K"};
    
    deal(deck, face, suit);
}

void shuffle(unsigned int wDeck[][FACES])
{
    for (size_t card = 1; card <= CARDS; ++card)
    {
        size_t row;
        size_t column;
        do
        {
            row = rand() % SUITS;
            column = rand() % FACES;
        } while (wDeck[row][column] != 0);
        wDeck[row][column] = card;    
    } 
}
 
void deal(unsigned int wDeck[][FACES], const char *wFace[],
const char *wSuit[])
{
    char hand[5];
    char *comb;
    for (int card = 0; card <= 5; ++card)
    {
        for (size_t row = 0; row < SUITS; ++row)
        {
            for (size_t column = 0; column < FACES; ++column)
            {
                if (wDeck[row][column] == card)
                {
                    comb = strcat(comb, wSuit[row]);
                    comb = strcat(comb, wFace[column]);
                    hand[card] = comb; 
                    printf("%s%s ", wSuit[row], wFace[column]);
                }
            } 
        }  
    }
}

int isHighCard(hand[5])
{
    for (int i = 0; i < 5; i++)
    {
        if ("DK" == hand[i] && "DQ" == hand && "S7" && "S4" && "H3")
        {
            return 1;
        }
        else
        {
            return 0;
        }   
    }
}
int is1Pair();
int is2Pair();
int is3Jack();
int is4Aces();
int isFlush();
int isFullHouse();
int isStraight();
int isStraightFlush();