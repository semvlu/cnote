#include <stdio.h>
int main()
{
    int t, h, hp, m, s;
    printf("Enter the time in seconds; ");
    scanf("%d", &t);
    h=t/3600;
    hp=t%3600;
    m=hp/60;
    s=hp%60;
    printf("%d:%d:%d\n",h,m,s);
    return (0);
}