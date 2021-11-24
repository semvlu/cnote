#include <stdio.h>
int main()
{
	int a[10];
	int i, j, k;
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(j=0;j<5;j++)
	{
		for(k=5;k<10;k++)
		{
			if(a[j] == a[k])
			printf("%d ", a[j]);
		} 
	}
	
} 
