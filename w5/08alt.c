#include <stdio.h>
int pal(int a);

int main()
{
    int c = 0;
    int n, p;
    for (n = 2;;n++)
    {
        if (c < 120)
        {
            if (pal(n) != 0)
            {
                for (p = 2; p < n; p++)
                {
                    if (n % p == 0)
                    {
                        break;
                    }      
                }
                if (n == p)
                {
                    printf("%d ", n);
                    c++;
                    if (c % 10 == 0)
                    {
                        printf("\n");
                    }    
                }           
            }          
        }
        else
        {
            break;
        }        
    }   
}

int pal(int a)
{
    int a1,a1r,a2,a2r,a3,a3r,a4,a4r,a5,a5r,a6,a7;
    a1 = a / 1000000;
    a1r = a % 1000000;
    a2 = a1r / 100000;
    a2r = a1r % 100000;
    a3 = a2r / 10000;
    a3r = a2r % 10000;
    a4 = a3r / 1000;
    a4r = a3r % 1000;
    a5 = a4r / 100;
    a5r = a4r % 100;
    a6 = a5r / 10;
    a7 = a5r % 10;
    if ((a1 == a7 && a2 == a6 && a3 == a5) || (a2 == a7 && a3 == a6 && a4 == a5 && a1 == 0) 
    || (a3 == a7 && a4 == a6 && a1 == 0 && a2 ==0) || (a4 == a7 && a5 == a6 && a1 == 0 && a2 == 0 && a3 ==0) 
    || (a5 == a7 && a1 ==0 && a2 == 0 && a3 == 0 && a4 ==0) || (a6 == a7 && a1==0 && a2==0 && a3==0 && a4==0 && a5==0) 
    || (a1==0 && a2==0 && a3==0 && a4==0 && a5==0 && a6==0))
    {
        return a;
    }
    else
    {
        return 0;
    }
}
