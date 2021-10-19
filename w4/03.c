#include <stdio.h>
int main()
{
    int n, q;
    scanf("%d", &n);
    double sum = 0.0;
    double s1, s2, s3, s4, s5;

    while (n != -1)
    {      
        scanf("%d", &q);  

        switch (n)
        {
        case 1:
            s1 = 2.98 * q;
            sum += s1;
            printf("%.2lf\n", sum);
            scanf("%d", &n);

            break;

        case 2:
            s2 = 4.50 * q;
            sum += s2;
            printf("%.2lf\n", sum);
            scanf("%d", &n);

            break;

        case 3:
            s3 = 9.98 * q;
            sum += s3;
            printf("%.2lf\n", sum);
            scanf("%d", &n);

            break;

        case 4:
            s4 = 4.49 * q;
            sum += s4;
            printf("%.2lf\n", sum);
            scanf("%d", &n);

            break;

        case 5:
            s5 = 6.87 * q;
            sum += s5;
            printf("%.2lf\n", sum);
            scanf("%d", &n);

            break;
    
        default:
            scanf("%d", &n);
            break;
        }
    }
}