#include <iostream>

using namespace std;

int utopian_func(int x)
{
	int sum = 1;
	for(int i = 0; i<x; i++)
	{
		if(i%2==0)
		{
			sum*=2;
		}
		else
		{
			sum+=1;
		}
	}

	return sum;
}

int main()
{
	int t;
	cin>>t;
	for(int i = 0; i<t; i++)
	{
		int n; 
		cin>>n;

		cout<<utopian_func(n)<<endl;
	}
	return 0;
}

