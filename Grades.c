#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d" , &n);
	int *arr = (int *)malloc(n * sizeof(int));
	for(int i = 0; i<n; i++)
	{
		scanf("%d" , &arr[i]);
	}

	int temp = 0;
	for(int i = 0; i<n ; i++)
	{
		temp = arr[i]/5 + 1;
		if(arr[i]>=38)
		{
			if(temp * 5 - arr[i]<3)
			{
				arr[i] = temp * 5;
			}
		}
	}

	for(int i = 0; i<n; i++)
	{
		printf("%d\n" , arr[i]);
	}
	return 0;
}

