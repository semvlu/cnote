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

    int n_t[8], n_m[5];
    char fname[30],fname1[30],fname2[30],fname3[30],fname4[30],fname5[30],fname6[30];
    char lname[30],lname1[30],lname2[30],lname3[30],lname4[30],lname5[30],lname6[30];
    float trans[8], cost[5], end[8] = {0.0};
    int n , till;
    
    fscanf(t, "%d%s%s%f", &n_t[0], fname, lname, &trans[0]);
    fscanf(t, "%d%s%s%f", &n_t[1], fname1, lname1, &trans[1]);
    fscanf(t, "%d%s%s%f", &n_t[2], fname2, lname2, &trans[2]);
    fscanf(t, "%d%s%s%f", &n_t[3], fname3, lname3, &trans[3]);
    fscanf(t, "%d%s%s%f", &n_t[4], fname4, lname4, &trans[4]);
    fscanf(t, "%d%s%s%f", &n_t[5], fname5, lname5, &trans[5]);
    fscanf(t, "%d%s%s%f", &n_t[6], fname6, lname6, &trans[6]);
    for (int i = 0; i < 3; i++)
        fscanf(om, "%d %f", &n_m[i], &cost[i]);

    int a = 0, b = 1;
    while (a < 7) // add trans w/ same acco#
    {
        if (n_t[a+b] == n_t[a])
        {
            if (n_t[a+b+1] == n_t[a])
            {
                if (n_t[a] != n_t[a-1])
                    end[a] = trans[a+b] + trans[a];
                else
                    end[a] += trans[a+b];
                b++;
            }
            else
            {
                if (n_t[a] != n_t[a-1])
                    end[a] = trans[a+b] + trans[a];
                else
                    end[a] += trans[a+b];
                a++;
                b = 1;
            } 
        }
        else
            a++; 
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (n_m[i] == n_t[j] && n_t[j] != n_t[j-1])
            {
                end[j] = cost[i] + trans[j];
            }
            else if (n_m[i] == n_t[j] && n_t[j] == n_t[j-1])
            {
                end[j-1] += cost[i];
            }    
        }  
    }
    
    fprintf(nm, "%d %s %s %.2f\n", n_t[0], fname, lname, end[0]);
    fprintf(nm, "%d %s %s %.2f\n", n_t[1], fname1, lname1, end[1]);
    fprintf(nm, "%d %s %s %.2f\n", n_t[2], fname2, lname2, end[2]);
    fprintf(nm, "%d %s %s %.2f\n", n_t[3], fname3, lname3, end[3]);
    fprintf(nm, "%d %s %s %.2f\n", n_t[4], fname4, lname4, end[4]);
    fprintf(nm, "%d %s %s %.2f\n", n_t[5], fname5, lname5, end[5]);

    fclose(t);
    fclose(om);
    fclose(nm);
}