#include <stdio.h>
int main()
{
	int arr[1000];

	int n; 
	scanf("%d" , &n);

	for(int i = 0; i<n+1; i++)
	{
		scanf("%d" , &arr[i]);
	}

	char c;
	scanf("%c" , &c);

	int sum = 0;

	for(int i = 0; i<n; i++)
	{
		if(c=='b')
		{
			if(i%2==0)
			{
				sum+=arr[i];
			}
		}
		else if(c=='g')
		{
			if(i%2!=0)
			{
				sum+=arr[i];
			}
		}
	}

	printf("%d" , sum);
	return 0;
}

