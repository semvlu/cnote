#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char *stack;
int top = -1;

void push(char e);
char pop();
int palin(char a[]);

int main()
{
    char a[200];
    gets(a);
    int mid = strlen(a) / 2;
    if (palin(a) == 1)
        printf("True\n");
    else
        printf("False\n");
}

int palin(char a[])
{
    int len = strlen(a); 
    int i;
 
    for (int i = 0; i < len; i++)
    {
        a[i] = tolower(a[i]);
        if (ispunct(a[i]) || isspace(a[i]) || iscntrl(a[i]) )
            a[i] = 0;
    }
    int mid = len / 2;
    for (int i = 0; i < mid; i++)
        push(a[i]);
    
    if (len % 2 != 0)
        i++;
 
    while (a[i] != '\0') 
    {
        char e = pop();
        if (e != a[i])
            return 0;
        i++;
    }
    return 1;
}

void push(char e)
{
    stack[++top] = e;
}
char pop()
{
    return stack[top--];
}