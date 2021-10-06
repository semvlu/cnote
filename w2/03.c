#include <stdio.h>
int main()
{
    float v,a,l;
    printf("Enter speed and acceleration: ");
    scanf("%f %f", &v, &a);
    l= v*v / (2*a);
    printf("The minimum runway length for this airplane is %f meters.\n",l);
    return (0);
}