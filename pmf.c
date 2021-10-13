#include <stdio.h>
#include <math.h>
int main()
{
    /* 
    Σ[i >= n, ttl] (ttl i) * pow(p, i) * pow(1 - p, ttl - i)
    (ttl i) = (ttl! / i! (ttl - i)!)
    var: i, p, ttl
    */
    int i, ttl;
    float p;
    printf("Enter pkt sw maximum capacity, total users, and percentage: ");
    scanf("%d %d %f", &i, &ttl, &p);

    // ttl!
    int a;
    long int ttlf = 1; 
    for (a = 1; a <= ttl; a++)
    {
        ttlf =  ttlf * a;
    }

    // matrix nested loop ≡ Σ
    double pmf, sumpmf;
    int n = i, ttli;
    long int c;
    for (i = n; i <= ttl; i++)
    {
        // i!
        int b;
        long int ifa = 1; 
        for (b = 1; b <= i; b++)
        {
            ifa =  ifa * b;
        }

        // (ttl- i)!
        ttli = ttl - i;
        int d;
        long int ttlif = 1; 
        for (d = 1; d <= ttli; d++)
        {
            ttlif =  ttlif * d;
        }

        c  = (long int) ttlf / (ifa * ttlif); // c = (ttl i) = (ttl! / i! (ttl - i)!)
        pmf = (double) c * pow(p, (double)i) * pow(1.0 - p, (double)(ttl - i));
        sumpmf = sumpmf + pmf;
    }
    printf("The probability mass is %lf.\n", sumpmf);

    return 0;
}