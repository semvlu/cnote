#include <stdio.h>
int main()
{
    float dd,mi,p,c;
    printf("Enter the driving distance: ");
    scanf("%f", &dd);
    printf("Enter miles per gallon: ");
    scanf("%f", &mi);
    printf("Enter price per gallon: ");
    scanf("%f",&p);
    c=(dd/mi)*p;
    printf("The cost of driving is $ %f.\n",c);
    return (0);
}