#include <stdio.h>
/*
struct Team
{
    char *name;
    int budg;
};
or */
typedef struct Team
{
    char *name;
    int budg;
}t;

typedef struct innerNest
{
    int a;
    int b;
}I;

typedef struct OuterNest
{
    I inner;
    int c;
}O;

int main()
{
    // struct Team Merc = {"Petronas Mercedes AMG", 60000};
    t Merc = {"Petronas Mercedes AMG", 60000};
    printf("%s %d\n", Merc.name, Merc.budg); 
    O nest = {1, 3, 7};
    printf("%d %d %d", nest.inner.a, nest.inner.b ,nest.c);
}
