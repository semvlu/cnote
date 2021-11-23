#include <stdio.h>
// only g[1][1] & g[2][2] are right 
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d", &a,&b,&c,&d);
	int e[a][b];
	int f[c][d];
	int g[a][d];
	int i,j,k,l,m,n,o,p,q,r;
	
	for(i = 0; i < a; i++)
	{
		for(j = 0;j < b;j++)
		{
			scanf("%d", &e[i][j]);	
		}
	}
	for(k = 0; k < c; k++)
	{
		for(l = 0;l < d;l++)
		{
			scanf("%d", &f[k][l]);	
		}
	}
	
	for(m = 0; m < a;m++)
	{
		for(n = 0;n < d;n++)
		{
			for(o = 0; o < b;o++)
			{
				g[m][n] += e[m][o] * f[o][n];
			}	
		}
	}
	
	for(q = 0; q < a; q++)
	{
		for(r = 0; r < d; r++)
		{
			printf("%d ", g[q][r]);
		}
		printf("\n");
	}
}
