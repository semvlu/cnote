#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int add(int a, int b);
int sub(int m, int n);
int mul(int i, int j);
void pkrandom(int x);
int main()
{
    srand(48763);
    int lvl;
    scanf("%d", &lvl);
    pkrandom(lvl);
}

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int sub(int m, int n)
{
    int o = m - n;
    return o;
}

int mul(int i, int j)
{
    int k = i * j;
    return k;
}

void pkrandom(int x)
{
    int a, b, c, d ,rr, rw, pklvl;
    if (x == 4)
    {
        for (int h = 0; h < 10; h++)
        {
            pklvl = (rand() % 3 + 1);
            a = (rand() % 10);
            b = (rand() % 10);
            if (pklvl == 1)
            {
                d = add(a, b);
                printf("How much is %d plus %d?\n", a, b);
            }
            else if (pklvl == 2)
            {
                d = sub(a, b);
                printf("How much is %d minus %d?\n", a, b);
            }
            else if (pklvl == 3)
            {
                d = mul(a, b);
                printf("How much is %d times %d?\n", a, b);
            }

            scanf("%d", &c);
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
        
    }
    else
    {
        switch (x)
        {
        case 1: //add
        for (int i = 0; i < 10; i++)
        {
            a = (rand() % 10);
            b = (rand() % 10);
            printf("How much is %d plus %d?\n", a, b);
            scanf("%d", &c);

            d = add(a, b);
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

        case 2: //subt
        for (int i = 0; i < 10; i++)
        {
            a = (rand() % 10);
            b = (rand() % 10);
            printf("How much is %d minus %d?\n", a, b);
            scanf("%d", &c);

            d = sub(a, b);
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

        case 3: //multi
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

        default:
            break;
        }
    }
}   