#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// time limit exceeded
int main()
{
    char a[200], b[200], c[200], d[200];
    int cntr = 0;
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    fgets(c, sizeof(c), stdin);
    fgets(d, sizeof(d), stdin);
    char *_a = strtok(a, " ");
    char *_b = strtok(b, " ");
    char *_c = strtok(c, " ");
    char *_d = strtok(d, " ");

    while (_a != NULL)
    {
        _a = strtok(NULL, " ");
        cntr++;
    }
    while (_b != NULL)
    {
        _b = strtok(NULL, " ");
        cntr++;
    }
    while (_c != NULL)
    {
        _d = strtok(NULL, " ");
        cntr++;
    }
    while (_d != NULL)
    {
        _d = strtok(NULL, " ");
        cntr++;
    }
    printf("%d\n", cntr);
}