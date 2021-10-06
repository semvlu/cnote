#include <stdio.h>
int main()
{
    int ipt, i1, i1r, i2, i2r, i3, i3r, i4, i5;
    scanf("%d", &ipt);
    i1 = ipt / 10000;
    i1r = ipt % 10000;
    i2 = i1r / 1000;
    i2r = i1r % 1000;
    i3 = i2r / 100;
    i3r = i2r % 100;
    i4 = i3r / 10;
    i5 = i3r % 10;

    if (i1==i5 && i2==i4)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

}