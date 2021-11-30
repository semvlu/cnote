#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int a[50][50] = {0};
    int locator[2] = {0,0};
    int i; //command
    int x; //move x spaces
    int dir = 5;
    int dir1;
    int locx, locy;
    bool up = true;

    while (i != 9)
    {
        scanf("%d", &i);
        switch (i)
        {
        case 1: //up
            up = true;
            break;
        case 2: //down
            up = false;
            break;
        case 3: //R
            dir--;
            break;
        case 4: //L
            dir++;
            break;
        case 5: //move x spaces
            scanf("%d", &x);
            dir1 = dir % 4;
            if (up == true)
            {
                switch (dir1)
                {
                case 0: // +y coord
                    locator[1] += x;
                    break;
                case 1: // +x coord
                    locator[0] += x;
                    break;
                case 2: // -y coord
                    locator[1] -= x;
                    break;
                case 3: // -x coord
                    locator[0] -= x;
                    break;
                default:
                    break;
                }
            }
            else //up = false -> mark
            {
                locx = locator[0];
                locy = locator[1];
                switch (dir1)
                {
                case 0: // +y coord, (down)
                    for (int m = locy; m <= locy + x; m++)
                    {
                        a[m][locx] = 1;
                        locator[1]++;
                    }
                    locator[1]--;
                    break;
                case 1: // +x coord, right
                    for (int m = locx; m <= locx + x; m++)
                    {
                        a[locy][m] = 1;
                        locator[0]++;
                    }
                    locator[0]--;
                    break;
                case 2: // -y coord, (up)
                    for (int m = locy; m >= locy - x; m--)
                    {
                        a[m][locx] = 1;
                        locator[1]--;
                    }
                    locator[1]++;
                    break;
                case 3: // -x coord, left
                    for (int m = locx; m >= locx - x; m--)
                    {
                        a[locy][m] = 1;
                        locator[0]--;
                    }
                    locator[0]++;
                    break;
                default:
                    break;
                }
            }
            break;
        case 6: //print
            for (int j = 0; j < 50; j++)
            {
                for (int k = 0; k < 50; k++)
                {
                    printf("%d", a[j][k]);
                }
                printf("\n");
            }
        default:
            break;
        }
    }   
}