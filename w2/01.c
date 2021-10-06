#include <stdio.h>
int main()
{
    float rt, amt, con;
    int chg;
    //printf("Enter the exchange rate from USD to NTD: \n");
    scanf("%f", &rt);
    //printf("Enter 0 to convert USD to NTD and 1 vice versa: \n");
    scanf("%d", &chg);
    
    if (chg==0)
    {
        //printf("Enter the USD amount: \n");
        scanf("%f", &amt);
        con = amt * rt;
        printf("%.2f NTD", con);
    }
    
    else if (chg==1)
    {
        //printf("Enter the NTD amount: \n");
        scanf("%f", &amt);
        con = amt / rt;
        printf("%.2f USD", con);
    }
}