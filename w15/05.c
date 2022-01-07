#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stacks
{
    char data;
    struct Stacks *nxtPtr;
};
typedef struct Stacks StackNode;
typedef StackNode *StackNodePtr;

void push(StackNodePtr *top, char info);
void printListBackward(StackNodePtr c);

int main()
{
    StackNodePtr stackPtr = NULL;
    char a[200];
    gets(a);
    for (int i = 0; i < strlen(a); i++)
        push(&stackPtr, a[i]);
    printListBackward(stackPtr);
}

void push(StackNodePtr *top, char info)
{
    StackNodePtr nPtr = malloc(sizeof(StackNode));
    //insert the node at stack top
    if(nPtr != NULL)
    {
        nPtr->data = info;
        nPtr->nxtPtr = *top;
        *top = nPtr;
    }
}

void printListBackward(StackNodePtr c)
{
    while (c != NULL)
    {
        printf("%c", c->data);
        c = c->nxtPtr;
    }
    puts("");   
}