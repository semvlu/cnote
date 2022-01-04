#include <stdio.h>
#include <stdlib.h>

struct listNode
{
    int data;
    struct listNode *nxtPtr;
};
typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, int val);
void displayList(ListNodePtr curPtr);
void printListBackward(ListNodePtr curPtr);

int main()
{
    ListNodePtr startPtr = NULL;
    int item;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &item);
        insert(&startPtr, item);   
    }
    displayList(startPtr);
    printListBackward(startPtr);
    puts("");
}

void insert(ListNodePtr *sPtr, int val)
{
    ListNodePtr nPtr = malloc(sizeof(ListNode));

    if (nPtr != NULL)
    {
        nPtr->data = val;
        nPtr->nxtPtr = NULL;

        ListNodePtr prevPtr = NULL;
        ListNodePtr curPtr = *sPtr;

        // find location in the list
        while (curPtr != NULL && val > curPtr->data)
        {
            prevPtr = curPtr;
            curPtr = curPtr->nxtPtr;
        } // move to new ptr
        
        // insert new node at beginning of list
        if (prevPtr == NULL)
        {
            nPtr->nxtPtr = *sPtr;
            *sPtr = nPtr;
        }
        // insert new node btwn prev & cur
        else 
        {
            prevPtr->nxtPtr = nPtr;
            nPtr->nxtPtr = curPtr;
        }
    }
}

void displayList(ListNodePtr curPtr)
{
    while (curPtr != NULL)
    {
        printf("%4d", curPtr->data);
        curPtr = curPtr->nxtPtr;
    }
    puts("");
}

void printListBackward(ListNodePtr curPtr)
{
    if (curPtr == NULL)
        return;
    printListBackward(curPtr->nxtPtr);
    printf("%4d", curPtr->data);
}