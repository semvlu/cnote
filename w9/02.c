#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(4875);
	int a[5][5];
	int i,j,m,n;
	int cntrrow[5] = {0};
	int maxrow = 0;
	int cntrclmn[5] = {0};
	int maxclmn = 0;
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			a[i][j] = (rand() % 2);
		}
	} 
	
	for(m = 0; m < 5; m++)
	{
		for(n = 0; n < 5; n++)
		{
			printf("%d ", a[m][n]);	
		}	
		printf("\n");
	}
	
	for(i = 0; i < 5 ;i++)
	{
		for(j = 0; j < 5; j++)
		{
			cntrrow[i] += a[i][j];
		}
	}
	
	for(i = 0; i < 4; i++)
	{
		if(cntrrow[i + 1] > cntrrow[i])
		{
			maxrow = i + 1;
		}
	}
	
	for(i = 0; i < 5 ;i++)
	{
		for(j = 0; j < 5; j++)
		{
			cntrclmn[i] += a[j][i];
		}
	}
	
	for(i =0; i < 4; i++)
	{
		if(cntrclmn[i + 1] > cntrclmn[i])
		{
			maxclmn = i + 1;
		}
	}
	printf("%d %d", maxrow, maxclmn);	
}
