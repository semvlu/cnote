#include <stdio.h>
#include <stdlib.h>

struct Stacks
{
    int data;
    struct Stacks *nxtPtr;
};
typedef struct Stacks StackNode;
typedef StackNode *StackNodePtr;

void push(StackNodePtr *top, int info);
int pop(StackNodePtr *top);
int isEmpty(StackNodePtr top);
void printStack(StackNodePtr cur);
void inst();

int main()
{
    StackNodePtr stackPtr = NULL;
    int val;
    inst();
    printf("? ");
    int choice;
    scanf("%d", &choice);

    while (choice != 3)
    {
        switch (choice)
        {
        case 1:
            printf("Enter an integer: ");
            scanf("%d", &val);
            push(&stackPtr, val);
            printStack(stackPtr);
            break;

        case 2:
            if (!isEmpty(stackPtr))
            {
                printf("The popped val is %d.\n", pop(&stackPtr));
            }
            printStack(stackPtr);
            break;
            
        default:
            puts("Invalid choice.\n");
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
    puts("Enter choice:\n"
    "1 to push a val on the stack\n"
    "2 to pop a val off the stack\n"
    "3 to end");
}

void push(StackNodePtr *top, int info)
{
    StackNodePtr nPtr = malloc(sizeof(StackNode));
    //insert the node at stack top
    if(nPtr != NULL)
    {
        nPtr->data = info;
        nPtr->nxtPtr = *top;
        *top = nPtr;
    }
    // no space available
    else
    {
        printf("%d not inserted. No memory available.\n", info);
    }
}

int pop(StackNodePtr *top)
{
    // remove a node
    StackNodePtr temp = *top;
    int popVal = (*top)->data;
    *top = (*top)->nxtPtr;
    free(temp);
    return popVal;
}

void printStack(StackNodePtr cur)
{
    if (cur == NULL)
    {
        puts("The stack is empty.\n");
    }
    else
    {
        puts("The stack is: ");

        while (cur != NULL)
        {
            printf("%d -> ", cur->data);
            cur = cur->nxtPtr;
        }
        puts("NULL\n");
    }
}

int isEmpty(StackNodePtr top)
{
    return top == NULL;
}