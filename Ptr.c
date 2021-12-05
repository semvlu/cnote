#include <stdio.h>
#define S0 2
#define S1 3
// &: passing address
// *: passing value
// int *: assign a pointer
// const int *ptr: value is const
// int * const ptr: ptr is const
int main()
{
    int a[S0][S1] = {{1,3,5},{10,11,12}};
    for (int i = 0; i < S0; i++)
    {
        for (int j = 0; j < S1; j++)
        {
            printf("%d ", *(*(a + i) + j) );
        }
    }

    int b[3] = {11,12,13};
    int *bPtr = b; // = &b[0]
    printf("\n%d %d\n", *bPtr, *(bPtr + 1));

    char *c = "ABCDEFG";
    printf("%s\n", c);
}