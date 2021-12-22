#include <stdio.h>
#include <stdlib.h>
typedef struct queueNode
{
    char data;
    struct queueNode *nxtPtr;
}Queue;
typedef Queue *QueuePtr;
void printQ(QueuePtr curPtr);
int isEmpty(QueuePtr hPtr);
char deQ(QueuePtr *hPtr, QueuePtr *tPtr);
void enQ(QueuePtr *hPtr, QueuePtr *tPtr, char val);
void inst();

int main()
{
    QueuePtr hPtr = NULL;
    QueuePtr tPtr = NULL;
    char item;
    inst();
    printf("? ");
    int cho;
    scanf("%d", &cho);

    while (cho != 3)
    {
        switch (cho)
        {
        case 1:
            printf("Enter a char: ");
            scanf("\n%c", &item);
            enQ(&hPtr, &tPtr, item);
            printQ(hPtr);
            break;
        case 2:
            if(!isEmpty(hPtr))
            {
                item = deQ(&hPtr, &tPtr);
                printf("%c has been dequeued.\n", item);
            }
            printQ(hPtr);
            break;
        default:
            puts("Invalid choice.\n");
            inst();
            break;
        }
        printf("? ");
        scanf("%d", &cho);
    }
    puts("End of run.");
}

void inst()
{
    printf("Enter your choice:\n"
    "1 to add an item to the queue\n"
    "2  to remove an item from the queue\n"
    "3 to end\n");
}

void enQ(QueuePtr *hPtr, QueuePtr *tPtr, char val)
{
    QueuePtr nPtr = malloc(sizeof(Queue));

    if (nPtr != NULL)
    {
        nPtr->data = val;
        nPtr->nxtPtr = NULL;

        if (isEmpty(*hPtr)) // is 1st elem
        {
            *hPtr = nPtr;
        }
        else // otherwise
        {
            (*tPtr)->nxtPtr = nPtr;
        }
        *tPtr = nPtr;
    }
    else
    {
        printf("%c not inserted. No memory avail.\n", val);
    }
}

char deQ(QueuePtr *hPtr, QueuePtr *tPtr)
{
    char val = (*hPtr)->data;
    QueuePtr temp = *hPtr;
    *hPtr = (*hPtr)->nxtPtr;

    if (*hPtr == NULL) // queue is empty
    {
        *tPtr = NULL;
    }
    free(temp);
    return val;  
}

int isEmpty(QueuePtr hPtr)
{
    return hPtr == NULL;
}

void printQ(QueuePtr curPtr)
{
    if (curPtr == NULL)
    {
        puts("Queue is empty.\n");
    }
    else
    {
        puts("The queue is: ");
        while (curPtr != NULL)
        {
            printf("%c -> ", curPtr->data);
            curPtr = curPtr->nxtPtr;
        }
        puts("NULL\n");
    }
}
