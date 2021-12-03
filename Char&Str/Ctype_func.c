#include <stdio.h>
#include <ctype.h>
int main()
{
    char a = 'E';
    int b = 2;
    printf("%d %d %d %d %d\n", isblank(a), isdigit(a), isalpha(a), isalnum(a), isxdigit(a));
    printf("%d %d %c %c %d \n", islower(a), isupper(a), tolower(a), toupper('d'), isspace(a));
    printf("%d %d %d %d\n", iscntrl(a), ispunct(a), isprint(b), isgraph(a));
}