#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// how to print the balls correctly
int main()
{
	srand(4823);	
	int b, s;
	scanf("%d %d", &b, &s);
	int slot[s]; // ball counter
	memset( slot, 0, s * sizeof(int));
	int dir = 0;
	int i, j;
	int rgen; // 0 = L, 1 = R
	
	for(i = 0; i < b; i++) // ball
	{
		for(j = 0; j < 7; j++) // path
		{
			rgen = (rand() % 2);
			if(rgen == 0)
			{
				printf("%c", 'L');
			}
			else
			{
				dir++;
				printf("%c", 'R');
			}
		}
		slot[dir] += 1;
		dir = 0;
		printf("\n");
	}
	
	int max = slot[0];
	for (i = 1; i < s; i++)
    {
        if (max < slot[i]) 
            max = slot[i]; 
    }
	int max1 = max;
	for (i = 0; i < max; i++)
	{
		for (j = 0; j < s; j++)
		{	
			if (slot[j] >= max1)
			{
				printf("%s", "o");
			}
			else if (slot[j] < max1)
			{
				printf(" ");
			}	
				
		}	
		max1--;			
		printf("\n");
	}
}