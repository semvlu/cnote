#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// order: article, noun, verb, preposition, article, noun
// line 24, how to change the 1st alphabet of the 1st word to uppercase?
int main()
{
    char *art[5] = {"the", "a", "one", "some", "any"};
    char *n[5] = {"boy", "girl", "dog", "town", "car"};
    char *v[5] = {"drove", "jumped", "ran", "walked", "skipped"};
    char *prep[5] = {"to", "from", "over", "under", "on"};
    int rart, rn, rv, rprep, rart1, rn1;
    char cap;
    for (int i = 0; i < 20; i++)
    {
        rart = (rand() % 5);
        rn = (rand() % 5);
        rv = (rand() % 5);
        rprep = (rand() % 5);
        rart1 = (rand() % 5);
        rn1 = (rand() % 5);
        cap = toupper(art[rart][0]);
        memset(art[rart], cap, sizeof(art)[rart][0]);

        printf("%s %s %s %s %s %s.\n", 
        art[rart], n[rn], v[rv], prep[rprep], art[rart1], n[rn1]);
    }
}