#include <stdio.h>
int main()
{
    float m,ini,fin,q;
    printf("Enter the amount of water in kilograms: ");
    scanf("%f", &m);
    printf("Enter the initial temperature: ");
    scanf("%f", &ini);
    printf("Enter the final temperature: ");
    scanf("%f",&fin);
    q=m * (fin - ini) * 4184;
    printf("The energy needed is %f.\n",q);
    return (0);
}