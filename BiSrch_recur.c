#include <stdio.h>
#define SIZE 5
int binarySearch(int a[], int s, int l, int x);

int main()
{
    int a[SIZE] = {3,6,9,12,15};
    int res = binarySearch(a, 0, 15, 3);
    if (res != -1)
    {
        printf("%d is found in the %dth elem.\n", a[res], res);
    }
    else
        printf("Not found.\n");

    // sizeof det the byte of the variables occupy
    printf("%lu", sizeof(a) / sizeof(a[0]));
}

int binarySearch(int a[], int s, int l, int x)
{
    if (l >= s) //r>l
    {
        int mid = s + (l - s) / 2;

        if (a[mid] == x)
            return mid;
 
        if (a[mid] > x)
            return binarySearch(a, s, mid - 1, x);
 
        return binarySearch(a, mid + 1, l, x);
    }
    return -1;
}
