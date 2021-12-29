#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *t;
    FILE *om;
    FILE *nm;
    t = fopen("trans.txt", "r");
    om = fopen("oldmast.txt", "r");
    nm = fopen("newmast.txt", "w");

    int n_t[5], n_m[5];
    char fname[30], fname1[30], fname2[30], fname3[30];
    char lname[30], lname1[30], lname2[30], lname3[30];
    float blnc[5], cost[5], end[5];
    
    fscanf(t, "%d%s%s%f", &n_t[0], fname, lname, &blnc[0]);
    fscanf(t, "%d%s%s%f", &n_t[1], fname1, lname1, &blnc[1]);
    fscanf(t, "%d%s%s%f", &n_t[2], fname2, lname2, &blnc[2]);
    fscanf(t, "%d%s%s%f", &n_t[3], fname3, lname3, &blnc[3]);
    for (int i = 0; i < 3; i++)
        fscanf(om, "%d %f", &n_m[i], &cost[i]);

    for (int i = 0; i < 4; i++)
    {   
        for (int j = 0; j < 4; j++)
        {
            if (n_t[i] == n_m[j])
            {
                end[i] = blnc[i] + cost[j];
                switch (i)
                {
                case 0:
                    printf("%d %s %s %.2f\n", n_t[i], fname, lname, end[i]);
                    fprintf(nm, "%d %s %s %.2f\n", n_t[i], fname, lname, end[i]);
                    break;
                case 1:
                    printf("%d %s %s %.2f\n", n_t[i], fname1, lname1, end[i]);
                    fprintf(nm, "%d %s %s %.2f\n", n_t[i], fname1, lname1, end[i]);            
                    break;
                case 2:
                    printf("%d %s %s %.2f\n", n_t[i], fname2, lname2, end[i]);
                    fprintf(nm, "%d %s %s %.2f\n", n_t[i], fname2, lname2, end[i]);
                    break;
                case 3:
                    printf("%d %s %s %.2f\n", n_t[i], fname3, lname3, end[i]);
                    fprintf(nm, "%d %s %s %.2f\n", n_t[i], fname3, lname3, end[i]);
                    break;
                default:
                    break;
                }
                break;
            }
            else if (n_t[i] != n_m[j] && j == 3)
            {
                printf("Unmatched transaction record for account number %d\n", n_t[i]);
                switch (i)
                {
                case 0:
                    fprintf(nm, "%d %s %s %.2f\n", n_t[i], fname, lname, blnc[i]);
                    break;
                case 1:
                    fprintf(nm, "%d %s %s %.2f\n", n_t[i], fname1, lname1, blnc[i]);
                    break;
                case 2:
                    fprintf(nm, "%d %s %s %.2f\n", n_t[i], fname2, lname2, blnc[i]);
                    break;
                case 3:
                    fprintf(nm, "%d %s %s %.2f\n", n_t[i], fname3, lname3, blnc[i]);
                    break;
                default:
                    break;
                } 
            } 
        } // j loop
    } // i loop
    fclose(t);
    fclose(om);
    fclose(nm);
}