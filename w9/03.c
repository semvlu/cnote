#include <stdio.h>
void sort (int m[][2], int row);

int main()
{
	int p;
	scanf("%d", &p);
	
	int a[p][2];
	int i,j;
	
	for(i=0; i< p; i++)
	{
		scanf("%d %d", &a[i][0], &a[i][1]);
	}
	
	sort(a, p);
}

void sort (int m[][2], int row)
{
	int x, y, t;
	for (x = 0; x < row; x++)
    {	
	    for (y = 0; y < row - 1; y++)
        {
            if (m[y + 1][0] > m[y][0])
            {
                int hold = m[y + 1][0];
                int hold1 = m[y+1][1];
                m[y + 1][0] = m[y][0];
                m[y + 1][1] = m[y][1];
                m[y][0] = hold; 
                m[y][1] = hold1;
            }
           	if(m[y][0] == m[y+1][0] && m[y+1][1] > m[y][1])
			{
				int hold2 = m[y+1][1];
				m[y+1][1] = m[y][1];
				m[y][1] = hold2;
			}
        }
    }
    
    for(t = 0; t < row; t++)
    {
    	printf("%d %d\n", m[t][0], m[t][1]);
	}
}
