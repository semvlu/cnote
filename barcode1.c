#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int direction(int *, int, int);
void decode(int *, int, int, int); 
int checkC(char *, char, int);
int checkK(char *, char, int, char); 
void reverse(int *, int);
void quicksort(int *, int, int); 
int partition(int *, int, int); 
void swap(int *, int *);
int deal(int*, int);

int main(int argc, char *argv[])
{ 
    int m, time=0;
    int *d, *second, maxWidthofnarrow; 
    FILE* ptr;

    if((ptr = fopen(argv[1],"r")) == NULL)
    {
        puts("File could not be opened"); 
    }
    else
    {
        fscanf(ptr,"%d",&m); 
        while(m != 0)
        {
            time++;
            if(m > 150||(m-29) % 6 != 0)
            {   // bad code
                int * temp = (int*)malloc(sizeof(int)*(m+1)); 
                for(int j = 1; j <= m; j++)
                {
                    fscanf(ptr,"%d",&temp[j]); 
                }
                printf("Case %d: bad code\n",time); 
                free(temp);
                fscanf(ptr,"%d",&m);
                continue;
            }

            d = (int*)malloc(sizeof(int)*(m+1)); 
            second= (int *)malloc(sizeof(int)*(m+1));

            for(int i =1; i <= m; i++)
            { 
                fscanf(ptr,"%d" ,&d[i]); 
                second[i] = d[i];
            } 

            quicksort(second, 1, m);  //ascending 
            int status2 = deal(second, m); 
            free(second);
            if(status2 !=-1)
            {
                maxWidthofnarrow = status2; 
            }
            else
            {
                printf("Case %d: bad code\n",time); 
                free(d);
                fscanf(ptr,"%d",&m);
                continue;
            }

            int status = direction(d, maxWidthofnarrow, m); //direction

            switch(status)
            {
                case 1: 
                    decode(d, maxWidthofnarrow,m-17, time); 
                    break;
                case 0: 
                    reverse(d,m);
                    decode(d, maxWidthofnarrow, m-17, time); 
                    break;
                default:
                    printf("Case %d: bad code\n", time);
            } 
            fscanf(ptr,"%d", &m); 
            free(d);
        }
        fclose(ptr); 
    }
}

int direction(int *d, int width, int m)
{
    if((d[1] <= width) && d[2] <= width && d[3] > width && d[4]>width &&
    d[5] <= width)
    {
        if(d[m-4] <= width && d[m-3] <= width && d[m-2] > width && d[m-1] > width &&
        d[m] <= width)
        {
            return 1;
        }
    }

    if((d[1] <= width) && d[2] > width && d[3] > width && d[4] <= width && d[5] <= width)
    { 
        if(d[m-4] <= width && d[m-3] > width && d[m-2] > width && d[m-1] <= width &&
        d[m] <= width)
        { 
            return 0;
        } 
    }
    return -1; //error 
}

void decode(int *d,int width,int m,int time)
{ 
    char s[100]="";
    int count=0, sum=0, weight=16, index=0, count2=0; 
    if(d[6] <= width)
    {
        for(int i = 7; i <= m; i++)
        { 
            count2++;
            if(count2 % 6 == 0)
            {
                if( !(d[i] <= width))
                {
                    printf("Case %d: bad code\n" , time);
                    return ; 
                }
                continue;
            }
            count++; 

            if(d[i] <= width)
            {
                //do nothing 
            }
            else if(d[i] > width)
            { 
                sum += weight;
            }
            weight /= 2; 

            if(count % 5 == 0)
            {
                switch(sum)
                { 
                    case 3:
                        s[index] = '0'; 
                        break;
                    case 9:
                        s[index] ='1';
                        break; 
                    case 16: 
                        s[index] ='2';
                        break; 
                    case 20: 
                        s[index] = '3';
                        break; 
                    case 24: 
                        s[index] = '4';
                        break; 
                    case 5: 
                        s[index] = '5';
                        break; 
                    case 12: 
                        s[index] = '6';
                        break; 
                    case 1: 
                        s[index] = '7';
                        break; 
                    case 18: 
                        s[index] = '8';
                        break; 
                    case 17: 
                        s[index] = '9';
                        break;
                    case 4:
                        s[index] = '-';
                        break;
                    default:
                        printf("Case %d: bad code\n",time); 
                        return;
                }
                index++; 
                weight = 16; 
                sum = 0;
            } 
        }
        count = 0, sum = 0, weight = 16, count2 = 0;
        //check character
        char c, e;
        for(int i = m + 1; i <= m + 12; i++)
        {
            count2++; 
            if(count2 % 6 == 0)
            {
                if(!(d[i] <= width))
                {
                    printf("Case %d: bad code\n",time); 
                    return;
                }
                continue; 
            }
            count++; 

            if(d[i] <= width)
            {
                //do nothing 
            }

            else if(d[i]>width)
            { 
                sum += weight;
            }
            weight /= 2; 

            if(count % 5 == 0)
            {
                switch(sum)
                {  
                    case 3:
                        c = '0'; 
                        break; 
                    case 9: 
                        c ='1'; 
                        break; 
                    case 16: 
                        c ='2'; 
                        break; 
                    case 20: 
                        c = '3'; 
                        break; 
                    case 24: 
                        c = '4'; 
                        break; 
                    case 5: 
                        c = '5'; 
                        break; 
                    case 12:
                        c = '6';
                        break;
                    case 1:
                        c = '7';
                        break;
                    case 18:
                        c = '8';
                        break;
                    case 17:
                        c = '9';
                        break;
                    case 4:
                        c = '-';
                        break;
                    default:
                        printf("Case %d: bad code\n",time); 
                        return;
                } 
                if(count == 5)
                {
                    if(checkC(s,c,index) !=1 )
                    {  
                        printf("Case %d: bad C\n",time); 
                        return ;
                    }
                    e = c; // record c check character 
                }
                else
                {
                    if(checkK(s,c,index,e) !=1)
                    {
                        printf("Case %d: bad K\n",time);
                        return; 
                    }
                } 
                weight = 16; 
                sum = 0;
            }
        }
        s[index] = '\0';
        printf("Case %d: %s\n" , time,s); 
    }
    else
    {
        printf("Case %d: bad code\n", time);
    }
}

int checkC(char * s,char c,int n)
{
    int correct,sum=0,weight; 
    if(c == '-')
    {
        correct = 10; 
    }
    else
    {
        correct = c-'0'; 
    }
    for(int i=1;i<=n;i++)
    { 
        if(s[i-1] == '-')
        {
            weight = 10; 
        }
        else
        {
            weight = s[i-1] - '0'; 
        }
        sum += ((n-i)%10+1) * weight; 
    }
    if(sum % 11 == correct)
    { 
        return 1;
    }
    else
    {
        return 0;
    } 
}

int checkK(char *s,char c,int n,char Ccheck)
{ 
    // c represents the user input ,Ccheck is last time we calculated
    int sum=0,weight,correct; 
    if(c=='-')
    {
        correct = 10; 
    }
    else
    {
        correct = c- '0'; 
    }
    for(int i =1; i <= n+1; i++)
    { 
        if(i == n+1)
        {
            if(Ccheck =='-')
            { 
                weight = 10;
            }
            else
            {
                weight = Ccheck-'0';
            } 
        }
        else
        {
            if(s[i-1]=='-')
            { 
                weight = 10;
            }
            else
            {
                weight = s[i-1] - '0';
            } 
        }
        sum += ((n-i+1)%9+1) * weight; 
    }
    if(sum % 11 == correct)
    { 
        return 1;
    }
    else
    {
        return 0;
    } 
}

void reverse(int *f,int m)
{ 
    for(int j =1; j < m; j++, m--)
    {
        swap(&f[j],&f[m]); 
    }
}

int partition(int *arr,int left,int right)
{
    int pivot= arr[right];
    int index = left-1;
    for(int j = left; j < right; j++)
    {
        if(arr[j] < pivot)
        { 
            index++;
            swap(&arr[j], &arr[index]);
        } 
    }
    index++; 
    swap(&arr[index], &arr[right]); 
    return index;
}

void quicksort(int * arr,int left ,int right)
{
    if(left < right)
    {
        int index = partition(arr,left,right); 
        quicksort(arr,left,index-1); 
        quicksort(arr,index+1,right);
    } 
}

void swap(int *s,int *f)
{ 
    int temp = *s;
    *s = *f;
    *f = temp; 
}

int deal (int * v,int size)
{
    int index = -1,bound = v[1];
    int maxofnarrow = (bound * 105) / 95; 
    for(int i = 1; i < size; i++)
    { 
        // find narrow max
        if(v[i]<=maxofnarrow&& v[i+1]> maxofnarrow)
        { 
            index = i;
        } 
    }
    if(index == -1)
    { 
        return -1;
    }
    int standard = (bound * 100) / 95;
    int wide = standard * 2;
    double w = (double) wide * 0.95;
    w = ceil(w);
    if(w <= v[index+1] && (int)wide * 1.05 >= v[size])
    {  
        // wide * 0.95
        return maxofnarrow; 
    }
    return -1;
    //bad code 
}