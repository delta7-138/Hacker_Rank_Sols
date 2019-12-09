#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main()
{
	vector <int>arr;
	int inp;
	int num;
	cin>>num;
	for(int i = 0 ; i<num; i++)
	{
		for(int j = 0; j<num; j++)
		{
			cin>>inp;
			arr.push_back(inp);
		}
	}
	int sum1 = 0 , sum2 = 0;
	for(int i = 0; i<num; i++)
		sum1+=arr[(i * (num+1))];
	for(int i = 1; i<=num; i++)
		sum2+=arr[(i * (num-1))];
	int diff = abs(sum1-sum2);
	cout<<diff;
	return 0;
}

