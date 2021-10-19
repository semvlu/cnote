#include <stdio.h>
int main()
{
    long a;
    int a1, a2, a3, a4, a5,a6,a7,a8,a9,a10,a1d,a2d,a3d,a4d,a5d,a6d,a7d,a8d;
    scanf("%ld", &a);

    a1 = a % 10;
    a1d = a % 100;
    a2 = (a1d - a1) / 10;
    a2d = a % 1000;
    a3 = (a2d - a1d) / 100;
    a3d = a % 10000;
    a4 = (a3d - a2d) / 1000;
    a4d = a % 100000;
    a5 = (a4d - a3d) / 10000;
    a5d = a % 1000000;
    a6 = (a5d - a4d) / 100000;
    a6d = a % 10000000;
    a7 = (a6d - a5d) / 1000000;
    a7d = a % 100000000;
    a8 = (a7d - a6d) / 10000000;
    a8d = a % 1000000000;
    a9 = (a8d - a7d) / 100000000;
    a10 = a / 1000000000;

    if (a < 10000000000)
    {
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", a1,a2,a3,a4,a5,a6,a7,a8,a9,a10);
    }
    
}