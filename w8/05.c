#include <stdio.h>
#include <stdlib.h>

int mul(int i, int j);

int main()
{
    int a, b, c, d ,rr, rw;
    float rcntr = 0.0;
    float wcntr = 0.0;
    float perc;
    srand(48763);

    for (int i = 0; i < 10; i++)
    {
        a = (rand() % 10);
        b = (rand() % 10);
        printf("How much is %d times %d?\n", a, b);
        scanf("%d", &c);

        d = mul(a, b);
        while (c != d)
        {
            rw = (rand() % 4) + 1;
            switch (rw)
            {
            case 1:
                printf("No, Please try again.\n");
                break;
            case 2:
                printf("Wrong. Try once more.\n");
                break;
            case 3:
                printf("Don’t give up.\n");
                break;
            case 4:
                printf("No. Keep trying.\n");
            default:
                break;
            }
            wcntr++; 
            scanf("%d", &c);       
        }

        if (c == d)
        {
            rr = (rand() % 4) + 1;
            switch (rr)
            {
            case 1:
                printf("Very good!\n");
                break;
            case 2:
                printf("Excellent!\n");
                break;
            case 3:
                printf("Nice work!\n");
                break;
            case 4:
                printf("Keep up the good work!\n");
                break;
            default:
                break;
            }
            rcntr++;
            if (rcntr + wcntr >= 10)
            {
                break;
            }  
        }
    }
    perc = rcntr / 10;
    if (perc < 0.75)
    {
        printf("Please ask your teacher for extra help.\n");
    }
    else
        printf("Congratulations, you are ready to go to the next level!\n");
    
}

int mul(int i, int j)
{
    int k = i * j;
    return k;
}