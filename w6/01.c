#include <stdio.h>
#include <math.h>
int tri(int a,int b,int c);

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (tri(a,b,c) == 1)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    
}

int tri(int a,int b,int c)
{
    int a2,b2,c2;
    a2 = pow(a,2);
    b2 = pow(b,2);
    c2 = pow(c,2);

    if (a2 + b2 == c2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
