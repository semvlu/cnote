#include <stdio.h>
void dispBit(int val);
int main()
{
    int a;
    scanf("%d", &a);
    dispBit(a);
}
void dispBit(int val)
{
    int dispMask = 1 << 31;
    printf("%d = ", val);
    for (int i = 1; i < 32; i++)
    {
        putchar(val & dispMask ? '1' : '0');
        val <<= 1; // shift val L by 1
        if (i % 8 == 0) 
        {
            putchar(' ');
        } 
    }
    putchar('\n');
}