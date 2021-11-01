#include <stdio.h>
int fibo(int n);

int main()
{
    //using for loop, complexity is linear
    int f0 = 0, f1 = 1, fn = 0;
    printf("%d\n%d\n", f0 ,f1);
    for (int i = 2; i <= 10; i++)
    {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
        
        printf("%d\n", fn);
    }
    
    //using function, complexity is exponential
    printf("%d", fibo(10));
}


int fibo(int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}