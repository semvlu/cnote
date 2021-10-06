#include <stdio.h>
int main()
{
    float w, h, bmi;
    scanf("%f %f", &w, &h);
    bmi = w / (h * h);

    if (bmi <= 18.5)
    {
        printf("%.2f\n", bmi);
        printf("Underweight\n");
    }

    else if (bmi <= 24.9)
    {
        printf("%.2f\n", bmi);
        printf("Normal\n");
    }
    else if (bmi <= 29.9)
    {
        printf("%.2f\n", bmi);
        printf("Overweight\n");
    }
    else
    {
        printf("%.2f\n", bmi);
        printf("Obese\n");
    }
}