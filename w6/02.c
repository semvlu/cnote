#include <stdio.h>
#include <math.h>
int rt(int a,int b,int c);

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);

    rt(a,b,c);
    
    
}

int rt(int a,int b,int c)
{
    int b2 = pow(b,2);
    float x1, x2;
    if (b2 - 4* a * c >= 0)
    {
        x1 = (-b + sqrt(b2 - 4* a * c)) / (2 * a);
        x2 = (-b - sqrt(b2 - 4* a * c)) / (2 * a);
        printf("%.2f %.2f",x1,x2);
    }
    else
    {
        printf("%d",-1);
    }   
    return 0;
}