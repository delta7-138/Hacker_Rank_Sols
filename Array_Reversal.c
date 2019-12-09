#include <stdio.h>
int main()
{
	int arr[1000];

	int n;
	scanf("%d" , &n);

	for(int i = 0; i<n; i++)
	{
		scanf("%d" , &arr[n-1-i]);
	}

	for(int i = 0; i<n; i++)
	{
		printf("%d " , arr[i]);
	}

	return 0;
}

