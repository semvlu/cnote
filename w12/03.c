#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// area code string to int
// phone number string to long
int main()
{
    char p[14];
    scanf("%s", p);

    char *ac = strtok(p, "()");
    char *_ac;
    int acd = strtol(ac, &_ac, 10);

    char *f4 = strtok(&p[4], "()- ");
    char *_f4;
    long f4l = strtol(f4, &_f4, 10);

    char *l4 = strtok(&p[9], "()- ");
    char *_l4;
    long l4l = strtol(l4, &_l4, 10);

    printf("%02d\n", acd);
    printf("%ld%ld", f4l, l4l);
}