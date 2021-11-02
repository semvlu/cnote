#include <stdio.h>
#include <math.h>
void mer(int p);

int main()
{
    mer(31);
}

void mer(int p)
{
    int i;
    int mers;
    for (int h = 1; h <= p; h++)
    { 
        mers = pow(2,h) - 1;
        for (i = 2; i <= sqrt(mers); i++)
        {
            if (mers % i == 0)
            {
                break;
            } 
        }
        if (sqrt(mers) < i)
        {
            if (h == 1)
            {
                continue;
            }
            else
            printf("%d %d\n", h, mers);
        }
        
    }
}