#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int a1,a1b, a2,a2b, a3, a4;
    a1 = a / 1000;
    a1b = a % 1000;
    a2 = a1b / 100;
    a2b = a1b % 100;
    a3 = a2b / 10;
    a4 = a2b % 10;
    // a1 a2 a3 a4
    int na1, na2, na3, na4;
    if (a1 >= 7)
    {
        na1 = a1 -7;
    }
    else
    {
        na1 = a1 + 3;
    }
    if (a2 >= 7)
    {
        na2 = a2 -7;
    }
    else
    {
        na2 = a2 + 3;
    }
    if (a3 >= 7)
    {
        na3 = a3 -7;
    }
    else
    {
        na3 = a3 + 3;
    }
    if (a4 >= 7)
    {
        na4 = a4 -7;
    }
    else
    {
        na4 = a4 + 3;
    }
    //na3 na4 na1 na2
    printf("%d%d%d%d\n",na3,na4,na1,na2);
}