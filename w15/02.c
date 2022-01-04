#include <stdio.h>
#include <stdlib.h>
struct listNode
{
    int data;
    struct listNode *nxtPtr;
};
typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *hPtr, ListNodePtr *tPtr, int val);
void displayList(ListNodePtr curPtr);
void concatenate(ListNodePtr one, ListNodePtr two);
void printListBackward(ListNodePtr curPtr);
void merge(ListNodePtr *headRef);
ListNodePtr SortedMerge(ListNodePtr a, ListNodePtr b);
void FrontBackSplit(ListNodePtr source, ListNodePtr *frontRef, ListNodePtr *backRef);

int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    ListNodePtr _1st = NULL;
    ListNodePtr _1stt = NULL;
    ListNodePtr _2nd = NULL;
    ListNodePtr _2ndt = NULL;
    int item;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &item);
        insert(&_1st, &_1stt, item);
    }
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &item);
        insert(&_2nd, &_2ndt, item);
    }
    concatenate(_1st, _2nd);
    merge(&_1st);
    displayList(_1st);
    printListBackward(_1st);
}

void insert(ListNodePtr *hPtr, ListNodePtr *tPtr, int val)
{
    ListNodePtr nPtr = malloc(sizeof(ListNode));

    if (nPtr != NULL)
    {
        nPtr->data = val;        
        nPtr->nxtPtr = NULL;
        if (*hPtr == NULL)
        {
            *hPtr = nPtr;
        }
        else
        {
            (*tPtr)->nxtPtr = nPtr;
        }
        *tPtr = nPtr;
        
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

void concatenate(ListNodePtr one, ListNodePtr two)
{
    while (one->nxtPtr != NULL)
    {
        printf("%4d", one->data);
        one = one->nxtPtr;
    }
    if (one->nxtPtr == NULL)
        one->nxtPtr = two;
    while (one != NULL)
    {
        printf("%4d", one->data);
        one = one->nxtPtr;
    }
    puts("");
}


void merge(ListNodePtr *headRef)
{
    ListNodePtr head = *headRef;
    ListNodePtr a;
    ListNodePtr b;
 
    if ((head == NULL) || (head->nxtPtr == NULL))
        return;
    FrontBackSplit(head, &a, &b);
    merge(&a);
    merge(&b);
    *headRef = SortedMerge(a, b);
}

ListNodePtr SortedMerge(ListNodePtr a, ListNodePtr b)
{
    ListNodePtr result = NULL;
     if (a == NULL)
        return b;
    else if (b == NULL)
        return a;
 
    if (a->data <= b->data) {
        result = a;
        result->nxtPtr = SortedMerge(a->nxtPtr, b);
    }
    else {
        result = b;
        result->nxtPtr = SortedMerge(a, b->nxtPtr);
    }
    return (result);
}
void FrontBackSplit(ListNodePtr source, ListNodePtr *frontRef, ListNodePtr *backRef)
{
    ListNodePtr fast;
    ListNodePtr slow;
    slow = source;
    fast = source->nxtPtr;
 
    while (fast != NULL)
    {
        fast = fast->nxtPtr;
        if (fast != NULL) 
        {
            slow = slow->nxtPtr;
            fast = fast->nxtPtr;
        }
    }
    *frontRef = source;
    *backRef = slow->nxtPtr;
    slow->nxtPtr = NULL;
}