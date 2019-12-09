#include <iostream>
using namespace std;
int main()
{
	int n;
	long long inp;
	long long sum = 0;
	cin>>n;
	for(int i = 0; i<n; i++)
	{
		cin>>inp;
		sum+=inp;
	}
	cout<<sum;
	return 0;
}

