#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getSumInt(int arr[], int N)
{
	int n, m;
	int sum = 0;
	
	n = -1;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < 0)
		{
			n = i;
			
			break;
		}
	}
	for (int i = N; i > n; i--)
	{
		if (arr[i] > 0)
		{
			m = i;
			
			break;
		}
	}

	if (n == -1)
		return printf("íåò îòðèöàòåëüíûõ\n");
	else
	{
		
		for (int i = n + 1; i < m; i++)
			sum += (arr[i]);
		printf("\n");
	}
	return sum;
}
