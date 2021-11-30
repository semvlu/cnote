#include <stdio.h>
#include <stdlib.h>
int main()
{
    // use 1d array
    int comb[36] = {0};
    int a, b;
    srand(48763);
    printf("%d\n", 48763);

    for (int i = 0; i < 36000; i++)
    {
        a = (rand() % 6) + 1;
        b = (rand() % 6) + 1;
        switch (a)
        {
        case 1:
            switch (b)
            {
            case 1:
                comb[0] += 1; 
                break;
            case 2:
                comb[1] += 1; 
                break;
            case 3:
                comb[2] += 1; 
                break;
                case 4:
                comb[3] += 1; 
                break;
            case 5:
                comb[4] += 1; 
                break;
            case 6:
                comb[5] += 1;
                break;
            default:
                break;
            }
            break;
        case 2:
            switch (b)
            {
            case 1:
                comb[6] += 1; 
                break;
            case 2:
                comb[7] += 1; 
                break;
            case 3:
                comb[8] += 1; 
                break;
                case 4:
                comb[9] += 1; 
                break;
            case 5:
                comb[10] += 1; 
                break;
            case 6:
                comb[11] += 1;
                break;
            default:
                break;
            }
            break;   
        case 3:
            switch (b)
            {
            case 1:
                comb[12] += 1; 
                break;
            case 2:
                comb[13] += 1; 
                break;
            case 3:
                comb[14] += 1; 
                break;
                case 4:
                comb[15] += 1; 
                break;
            case 5:
                comb[16] += 1; 
                break;
            case 6:
                comb[17] += 1;
                break;
            default:
                break;
            }
            break;
        case 4:
            switch (b)
            {
            case 1:
                comb[18] += 1; 
                break;
            case 2:
                comb[19] += 1; 
                break;
            case 3:
                comb[20] += 1; 
                break;
                case 4:
                comb[21] += 1; 
                break;
            case 5:
                comb[22] += 1; 
                break;
            case 6:
                comb[23] += 1;
                break;
            default:
                break;
            }
            break; 
        case 5:
            switch (b)
            {
            case 1:
                comb[24] += 1; 
                break;
            case 2:
                comb[25] += 1; 
                break;
            case 3:
                comb[26] += 1; 
                break;
                case 4:
                comb[27] += 1; 
                break;
            case 5:
                comb[28] += 1; 
                break;
            case 6:
                comb[29] += 1;
                break;
            default:
                break;
            }
            break;
        case 6:
            switch (b)
            {
            case 1:
                comb[30] += 1; 
                break;
            case 2:
                comb[31] += 1; 
                break;
            case 3:
                comb[32] += 1; 
                break;
                case 4:
                comb[33] += 1; 
                break;
            case 5:
                comb[34] += 1; 
                break;
            case 6:
                comb[35] += 1;
                break;
            default:
                break;
            }
            break; 
        default:
            break;
        }
    }

    for (int i = 0; i < 36; i++)
    {
        if (i % 6 == 0 && i != 0)
        {
            printf("%d\n", comb[i]);
        }
        else
            printf("%d ", comb[i]);
    }
}