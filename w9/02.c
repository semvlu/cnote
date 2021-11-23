#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// print wrong max row, column
int main()
{
	int a[5][5];
	int i,j,m,n;
	int cntrrow[5] = {0};
	int maxrow;
	int cntrclmn[5] = {0};
	int maxclmn;
	
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
	maxrow = cntrrow[0];
	
	for(i =0; i < 4; i++)
	{
		if(cntrrow[i + 1] > cntrrow[i])
		{
			maxrow = cntrrow[i + 1];
		}
	}
	
	for(i = 0; i < 5 ;i++)
	{
		for(j = 0; j < 5; j++)
		{
			cntrclmn[i] += a[j][i];
		}
	}
	maxclmn = cntrclmn[0];
	
	for(i =0; i < 4; i++)
	{
		if(cntrclmn[i + 1] > cntrclmn[i])
		{
			maxclmn = cntrclmn[i + 1];
		}
	}
	printf("%d %d", maxrow, maxclmn);
}
