#include <stdio.h>
int getPentagonalNumber(int n);

int main()
{
    int c = 0;
    for (int i = 1; i <= 100; i++)
    {
        printf("%7d", getPentagonalNumber(i));
        c++;
        if (c % 10 == 0)
        {
            printf("\n");
        }
    }   
}

int getPentagonalNumber(int n)
{
    int penta = (n * (3 * n - 1)) / 2;
    return penta;
}