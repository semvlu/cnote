#include <stdio.h>
int main()
{
	srand(4823);
	int b, s;
	scanf("%d %d", &b, &s);
	int slot[s] = {0}; // ball counter
	int dir = 0;
	int i, j;
	int rgen; // 0 = L, 1 = R
	
	for(i = 0; i < b; i++) // ball
	{
		for(j = 0; j < 7; j++) // path
		{
			rgen = rand() % 2;
			if(rgen == 0)
			{
				printf("%c", 'L');
			}
			else
			{
				dir++;
				printf("%c", 'R');
			}
			
			switch(dir)
			{
				case 0:
					slot[0] +=1; 
					break;
				case 1:
					slot[1] +=1;
					break;
				case 2:
					slot[2] +=1;
					break;
				case 3:
					slot[3] +=1;
					break;
				case 4:
					slot[4] +=1;
					break;
				case 5:
					slot[5] +=1;
					break;
				case 6:
					slot[6] +=1;
					break;
				case 7:
					slot[7] +=1;
					break;
				default:
					break;
			}
		}
		dir = 0;
		printf("\n");
	}
	for (i = 0; i<s; i++)
	{
		printf("%d ", slot[i]);
	}
	//print balls in slots, using slot[s]
	
	/*
	int k,l;
	for(k = 0; k < s; k++)
	{
		if(slot[k] == 0)
		{
			printf("%s", " ");
		}
		else
		{
			printf(" ");
			printf("%-8s" "o");

		}

	}  
	*/
	
}
