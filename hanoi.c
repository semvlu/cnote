#include <stdio.h>

void hanoi(int n, char A, char B, char C);
int t = 0;

int main(void)
{
    int f;
    printf("height of the tower: ");
    scanf("%d", &f);

    hanoi(f, 'A', 'B', 'C');
    printf("To move %d layers of hanoi tower needs to move %d times.\n", f, t);
}

void hanoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("%d: To put %dth plate from %c to %c.\n", ++t, n, A, C);
    }
    else
    {
        hanoi(n - 1, A, C, B);
        printf("%d: To put %dth plate from %c to %c.\n", ++t, n, A, C);
        hanoi(n - 1, B, A, C);
    }
}