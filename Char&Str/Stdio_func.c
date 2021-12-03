#include <stdio.h>
#define SIZE 50
void rev(const char * const sPtr);
int main()
{
    int c;
    char sent[SIZE];
    char s[SIZE];
    int i = 0;
    int a = 2;
    puts("Enter texts:");

    /*
    while ((i < SIZE - 1) && (c = getchar()) != '\n')
    {
        sent[i++] = c;
    }
    sent[i] = '\0';
    */

    fgets(sent, SIZE, stdin); // scan input
    puts(sent);
    rev(sent);

    sprintf(s, "Hello %d my old friend", a);
    printf("\nThe sentence was %s", s);
}

void rev(const char * const sPtr)
{
    if ('\0' == sPtr[0])
    {
        return;
    }
    else
    {
        rev(&sPtr[1]);
        putchar(sPtr[0]);
    }
}