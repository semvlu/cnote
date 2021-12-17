#include <stdio.h>
#include <stdlib.h>

struct listNode
{
    char data;
    struct listNode *nxtPtr;
};
typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, char val);
char del(ListNodePtr *sPtr, char val);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr curPtr);
void inst();

int main()
{
    ListNodePtr startPtr = NULL;
    char item;
    inst();
    printf("? ");
    int choice;
    scanf("%d", &choice);

    while (choice != 3)
    {
        switch (choice)
        {
        case 1:
            printf("Enter a char: ");
            scanf("\n%c", &item);
            insert(&startPtr, item);
            printList(startPtr);
            break;
        
        case 2:
            if (!isEmpty(startPtr))
            {
                printf("Enter char to delete: ");
                scanf("\n%c", &item);

                if (del(&startPtr, item))
                {
                    printf("%c deleted.\n", item);
                    printList(startPtr);
                }
                else
                {
                    printf("%c could not be found.\n", item);
                }   
            }
            else
            {
                puts("List is empty");
            }
            break;

        default:
            puts("Invalid choice.");
            inst();
            break;
        }
        printf("? ");
        scanf("%d", &choice);  
    }
    puts("End of run.");
}

void inst()
{
    puts("Enter your choice:\n"
    "1 to insert\n"
    "2 to delete\n"
    "3 to end. ");
}

void insert(ListNodePtr *sPtr, char val)
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
    else
    {
        printf("%c not inserted. No memory available.\n", val);
    }
}

char del(ListNodePtr *sPtr, char val)
{
    // del 1st node if a match is found
    if (val == (*sPtr)->data)
    {
        ListNodePtr tempPtr = *sPtr;
        *sPtr = (*sPtr)->nxtPtr;
        free(tempPtr);
        return val;
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
            prevPtr->nxtPtr = curPtr->nxtPtr;
            free(tempPtr);
            return val;
        }
    }
    return '\0'; 
}

int isEmpty(ListNodePtr sPtr)
{
    return sPtr == NULL;
}

void printList(ListNodePtr curPtr)
{
    if (isEmpty(curPtr))
    {
        puts("List is empty.");
    }
    else
    {
        puts("The list is:");

        while (curPtr != NULL)
        {
            printf("%c -> ", curPtr->data);
            curPtr = curPtr->nxtPtr;
        }
        puts("NULL\n");
    }
}