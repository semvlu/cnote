#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stacks
{
    char *data;
    struct Stacks *nxtPtr;
};
typedef struct Stacks StackNode;
typedef StackNode *StackNodePtr;

void push(StackNodePtr *top, char *info);
void printListBackward(StackNodePtr c);

int main()
{
    StackNodePtr stackPtr = NULL;
    char a[200];
    gets(a);
    char *aPtr = strtok(a, " ");
    while (aPtr != NULL)
    {
        aPtr = strtok(NULL, " ");
        push(&stackPtr, aPtr);
    }
    printListBackward(stackPtr);
}

void push(StackNodePtr *top, char *info)
{
    StackNodePtr nPtr = malloc(sizeof(StackNode));
    //insert the node at stack top
    if(nPtr != NULL)
    {
        strcat(nPtr->data, info);
        nPtr->nxtPtr = *top;
        *top = nPtr;
    }
}

void printListBackward(StackNodePtr c)
{
    if (c == NULL)
        return;
    printListBackward(c->nxtPtr);
    printf("%s ", c->data);
}