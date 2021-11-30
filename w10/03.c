#include <stdio.h>
#include <stdlib.h>
//array to print
int main()
{
    int gridX[3][3] = {0};
    int gridO[3][3] = {0};
    int cntr = 0;
    int row, clmn, sum = 0, psum;
    int o=0,o1=0,o2=0,o3=0,o4=0,o5=0,o6=0,o7=0,x=0,x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0;
    for(int i=0;i<3;i++){
        printf("-------------\n");
        for(int j=0;j<3;j++){
            printf("|   ");
        }
        printf("|\n");
    }
    printf("-------------\n\n");

    while (o!=3 && o1!=3 && o2!=3 && o3!=3 && o4!=3 && o5!=3 && o6!=3 && o7!=3 &&
    x!=3 && x1!=3 && x2!=3 && x3!=3 && x4!=3 && x5!=3 && x6!=3 && x7!=3)
    {
        if (cntr % 2 == 0) // player X
        {
            printf("Enter a row for player X:\n");
            scanf("%d", &row);
            printf("Enter a column for player X:\n");
            scanf("%d", &clmn);
            gridX[row][clmn] = 1; 
            cntr++;
        }
        else // player O
        {
            printf("Enter a row for player O:\n");
            scanf("%d", &row);
            printf("Enter a column for player O:\n");
            scanf("%d", &clmn);
            gridO[row][clmn] = 1;   
            cntr++;
        } 
        o = 0;
        o1 = 0;
        o2 = 0;
        o3 = 0;
        o4 = 0;
        o5 = 0;
        for (int i = 0; i < 3; i++)
        {

            o += gridO[0][i];
            o1 += gridO[1][i];
            o2 += gridO[2][i];
            o3 += gridO[i][0];
            o4 += gridO[i][1];
            o5 += gridO[i][2];
        }
        o6 = 0;
        o7 = 0;
        o6 = gridO[0][0] + gridO[1][1] + gridO[2][2];
        o7 = gridO[0][2] + gridO[1][1] + gridO[2][0];
        x = 0;
        x1 = 0;
        x2 = 0;
        x3 = 0;
        x4 = 0;
        x5 = 0;
        for (int i = 0; i < 3; i++)
        {
            
            x += gridX[0][i];
            x1 += gridX[1][i];
            x2 += gridX[2][i];
            x3 += gridX[i][0];
            x4 += gridX[i][1];
            x5 += gridX[i][2]; 
        }
        x6 = 0;
        x7 = 0;
        x6 = gridX[0][0] + gridX[1][1] + gridX[2][2];
        x7 = gridX[0][2] + gridX[1][1] + gridX[2][0]; 

        for (int i = 0; i < 3; i++)
        {
            if (i == 0)
            {
                puts("-------------");
            }
            else
            {
                puts("\n-------------");
            }
            printf("|");
            for (int j = 0; j < 3; j++)
            {
                if (gridX[i][j] == 1)
                {
                    printf(" X |");
                }
                else if (gridO[i][j] == 1)
                {
                    printf(" O |");
                }
                else 
                {
                    printf("   |");
                } 
            }
        }
        printf("\n-------------\n\n");  
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                psum = 0;
                psum = gridX[i][j] + gridO[i][j];
                sum += psum;
            } 
        }
        if (o==3 || o1==3 || o2==3 || o3==3 || o4==3 || o5==3 || o6==3 || o7==3 ||
        x==3 || x1==3 || x2==3 || x3==3 || x4==3 || x5==3 || x6==3 || x7==3)
        {
            if (o==3 || o1==3 || o2==3 || o3==3 || o4==3 || o5==3 || o6==3 || o7==3)
            {
                printf("O player won.\n");
            }
            else
            {
                printf("X player won.\n");
            }           
        }
        else if (sum == 9)
        {
            printf("draw.\n");
            break;
        }
        
    }
}