#include <stdio.h>
#define SIZE 5

int main()
{
    int a[SIZE];
    puts("Input 5 elem in the array");

    for (size_t b = 0; b < SIZE; b++)
    {
        scanf("%d", &a[b]);
    }
    
    for (size_t p = 0; p < SIZE; p++)
    {
        for (size_t n = 0; n < SIZE - 1; n++)
        {
            if (a[n] > a[n+1])
            {
                int hold = a[n];
                a[n] = a[n+1];
                a[n+1] = hold; 
            }
            
        }
        
    }

    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    
    
}