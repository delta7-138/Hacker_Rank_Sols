#include <iostream>

using namespace std;

int main()
{
	long arr[1000];

	int n;

	cin>>n;

	for(int i = 0; i<n; i++)
	{
		cin>>arr[i];
	}

	long max = arr[0] , min = arr[0];

	int count_arr[2];

	for(int i = 1; i<n; i++)
	{
		if(max<arr[i])
		{
			max = arr[i];
			count_arr[0]++;
		}
		if(min>arr[i])
		{
			min = arr[i];
			count_arr[1]++;
		}
	}

	for(int i = 0; i<2; i++)
	{
		cout<<count_arr[i]<<" ";
	}

	return 0;
}


