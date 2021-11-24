#include <stdio.h>
#include <string.h>
// run on local gets right, but WA on OJ
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d", &a,&b,&c,&d);
	int e[a][b];
	int f[c][d];
	int g[a][d];
	memset( g, 0, a * d * sizeof(int));
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
