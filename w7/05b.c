#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long long int f0 = 0, f1 = 1;
    unsigned long long int fn, fnm1;
    for (int i = 2;; i++)
    {
        fnm1 = fn;
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;

        if (f1 < f0)
        {
            printf("%llu ", fnm1); 
            break;   
        }
    }
}
