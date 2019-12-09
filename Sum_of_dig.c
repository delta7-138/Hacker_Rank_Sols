#include <stdio.h>
int sum(int n)
{
	if(n>0)
	{
		int rem = n%10;
		return (sum(n/10) + rem);
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n;
	scanf("%d" , &n);
	int ans = sum(n);
	printf("%d" , ans);
	return 0;
}

