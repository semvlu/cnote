#include <stdio.h>
#define SIZE 5
int biSearchRecur(int a[], int lo, int hi, int x);
int biSearch(int a[], int lo, int hi, int x);

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

int biSearchRecur(int a[], int lo, int hi, int x)
{
    if (hi >= lo)
    {
        int mid = (hi + lo) / 2;

        if(a[mid] == x)
        {
            return mid;
        }
 
        else if(a[mid] > x)
        {
            return binarySearch(a, lo, mid - 1, x);
        }
        else
            return binarySearch(a, mid + 1, hi, x);
    }
    return -1;
}

int biSearch(int a[], int lo, int hi, int x)
{
    while(hi >= lo)
    {
        int mid = (hi + lo) / 2;
        
        if(a[mid] == x)
        {
            return mid;
        }
        
        else if(a[mid] > x)
        {
            hi = mid -1;
        }
        
        else
        {
            lo = mid + 1;
        }
    }
    return -1;
}
