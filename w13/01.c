#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *fact_calc(int n);
char p[300] = "";
char sn[200] = "", fact[200] = "", e[200] = "", f[200] = "", g[200]="";
int main()
{
    int a;
    scanf("%d", &a);
    while (a != -1)
    {
        if (0 <= a && a<=9)
        {
            // res
            int res = a;
            int cnt = 0;
            for (int i = a; i > 1; i--)
            {
                res *= i-1;
            }
            while (res != 0)
            {
                res /= 10;
                cnt++;
            }
            int num = 5 + 2 * a +cnt;
            for (int i = 0; i < num; i++)
            {
                printf("%c", '*');
            }
            if (a ==0)
            {
                printf("*");
            }
            
            printf("\n");

            printf("%s", fact_calc(a)); 

            printf("\n");
            for (int i = 0; i < num; i++)
            {
                printf("%c", '*');
            }
            if (a ==0)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("Invalid entry\n");
        }
        memset(p, 0, sizeof(p));
        memset(fact, 0, sizeof(fact));
        scanf("%d", &a);
    }
}

char *fact_calc(int n)
{
    strcat(p, "*");
    int res = n;
    if (n == 0)
    {
        res = 1;
    }
    
    for (int i = n; i > 1; i--)
    {
        res *= i -1;
    }
    sprintf(sn, "%d", n);
    strcat(p, sn);
    strcat(p, "!=");

    for (int i = n; i > 0; i--)
    {
        if (i != 1)
        {
            sprintf(e, "%d", i);
            strcat(fact, e);
            strcat(fact, "x");
        }
        else
        {
            sprintf(f, "%d", i);
            strcat(fact, f);
        } 
    }
    strcat(p, fact);
    if (n != 0)
    {
        strcat(p, "=");
    }
    sprintf(g, "%d", res);
    strcat(p, g);
    strcat(p, "*");
    return p;
}