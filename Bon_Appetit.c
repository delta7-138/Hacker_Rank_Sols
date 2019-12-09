#include <stdio.h>
int main()
{
	int b_charged , num_items , index ;
	int arr_price[100000];

	scanf("%d %d" , &num_items , &index);

	for(int i = 0; i<num_items ;i++)
	{
		scanf("%d" , &arr_price[i]);
	}

	scanf("%d" , &b_charged);

	long sum = 0;

	for(int i = 0; i<num_items; i++)
	{
		if(i!=index)
		{
			sum+=arr_price[i];
		}
	}

	long avg = sum/2;

	if(avg==b_charged)
	{
		printf("Bon Appetit");
	}
	else
	{
		printf("%ld" , b_charged - avg);
	}

	return 0;
}

