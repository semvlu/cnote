#include <stdio.h>
#include <stdlib.h>

int mul(int i, int j);

int main()
{
    int lvl, a, b, c, d ,rr, rw;
    srand(48763);
    scanf("%d", &lvl);
    switch (lvl)
    {
    case 1:
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
            }
        }
        break;

        case 2:
        for (int i = 0; i < 10; i++)
        {
            a = (rand() % 100);
            b = (rand() % 100);
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
            }
        }
        break;

    case 3:
        for (int i = 0; i < 10; i++)
        {
            a = (rand() % 1000);
            b = (rand() % 1000);
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
            }
        }
        break;
    default:
        break;
    }

}

int mul(int i, int j)
{
    int k = i * j;
    return k;
}