#include <stdio.h>
int main()
{
    int h;
    double rt;
    scanf("%d %lf", &h, &rt);
    double s;
    
    if (h==1)
    {
        printf("\n");
    }

    while(h != -1)
    {
        if (h <= 40)
        {
            s = h * rt;
        }
        else if (h > 40)
        {
            s = 40 * rt + (h - 40) * 1.5 * rt; 
        }
        printf("%.2lf\n",s);
        scanf("%d %lf", &h, &rt);
    }

}