#include <stdio.h>
#include <stdlib.h>
// endinsert function: segmentation fault
struct listNode
{
    int data;
    struct listNode *prevPtr;   
    struct listNode *nxtPtr;
};
typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;
void insert(ListNodePtr *sPtr, int val);
void Endinsert(ListNodePtr *sPtr, int val);
void Desinsert(ListNodePtr *sPtr, int des, int val);
void del(ListNodePtr *sPtr, int val);
void displayList(ListNodePtr curPtr);

int main()
{
    ListNodePtr startPtr = NULL;
    int opt, val, loc;
    scanf("%d", &opt);
    while (opt != -1)
    {
        switch (opt)
        {
        case 1:
            scanf("%d", &val);
            insert(&startPtr, val);
            displayList(startPtr);
            break;
        case 2:
            scanf("%d", &val);
            Endinsert(&startPtr, val);
            displayList(startPtr);
            break;
        case 3:
            scanf("%d%d", &loc, &val);
            Desinsert(&startPtr, loc, val);
            displayList(startPtr);
            break;
        case 4:
            scanf("%d", &val);
            del(&startPtr, val);
            displayList(startPtr);
            break;
        default:
            break;
        }
        scanf("%d", &opt);
    }
}

void insert(ListNodePtr *sPtr, int val)
{
    ListNodePtr nPtr = malloc(sizeof(ListNode));

    if (nPtr != NULL)
    {
        nPtr->data = val;
        nPtr->prevPtr = NULL;
        nPtr->nxtPtr = *sPtr;
        
        if (*sPtr != NULL)
            (*sPtr)->prevPtr = nPtr;
        *sPtr = nPtr;
    }
}

void Endinsert(ListNodePtr *sPtr, int val)
{
    ListNodePtr nPtr = malloc(sizeof(ListNode));

    if (nPtr != NULL)
    {
        nPtr->data = val;
        nPtr->prevPtr = NULL;
        nPtr->nxtPtr = NULL;

        ListNodePtr prevPtr = NULL;
        ListNodePtr curPtr = *sPtr;

        while (curPtr != NULL)
        {
            prevPtr = curPtr;
            curPtr = curPtr->nxtPtr;
        }
        if (prevPtr == NULL)
        {
            nPtr->nxtPtr = *sPtr;
            (*sPtr)->prevPtr = nPtr;
            *sPtr = nPtr;
        }
        else
        {
            curPtr->nxtPtr = nPtr;
            nPtr->prevPtr = curPtr;
        }
    }
}

void Desinsert(ListNodePtr *sPtr, int des, int val)
{
    ListNodePtr nPtr = malloc(sizeof(ListNode));
    if (nPtr != NULL)
    {
        nPtr->data = val;
        nPtr->prevPtr = NULL;
        nPtr->nxtPtr = NULL;

        ListNodePtr prevPtr = NULL;
        ListNodePtr curPtr = *sPtr;

        // find location in the list
        while (curPtr != NULL && curPtr->data != des)
        {
            prevPtr = curPtr;
            curPtr = curPtr->nxtPtr;
        } // move to new ptr
        if (prevPtr == NULL)
        {
            nPtr->nxtPtr = curPtr;
            curPtr->prevPtr = nPtr;
            *sPtr = nPtr;
        }
        else
        {
            prevPtr = curPtr->prevPtr;
            nPtr->prevPtr = prevPtr;
            prevPtr->nxtPtr = nPtr;
            nPtr->nxtPtr = curPtr;
            curPtr->prevPtr = nPtr;
        }
    }
}

void del(ListNodePtr *sPtr, int val)
{
    // del 1st node if a match is found
    if (val == (*sPtr)->data)
    {
        ListNodePtr tempPtr = *sPtr;
        *sPtr = (*sPtr)->nxtPtr;
        free(tempPtr);
    }
    else
    {
        ListNodePtr prevPtr = *sPtr;
        ListNodePtr curPtr = (*sPtr)->nxtPtr;

        // find the corr. loc. in the list
        while (curPtr != NULL && curPtr->data != val)
        {
            prevPtr = curPtr;
            curPtr = curPtr->nxtPtr;
        }
        // del node at cur
        if (curPtr != NULL)
        {
            ListNodePtr tempPtr = curPtr;

            prevPtr->nxtPtr = NULL;
            if (curPtr->nxtPtr != NULL)
            {
                prevPtr->nxtPtr = curPtr->nxtPtr;
                curPtr->nxtPtr->prevPtr = prevPtr;
            }
            free(tempPtr);
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