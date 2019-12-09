#include <iostream>
#include <vector>

using namespace std;

int max_potion(int k , vector <int>height)
{
	int max = height[0];
	for(int i = 1; i<height.size();i++)
	{
		if(height[i]>max)
		{
			max = height[i];
		}
	}

	if(max-k<0)
	{
		return 0;
	}
	else
	{
		return (max-k);
	}
}

int main()
{
	int n,k;
	cin>>n>>k;

	vector <int>arr;

	int input = 0;
	for(int i = 0; i<n; i++)
	{
		cin>>input;
		arr.push_back(input);
	}

	cout<<max_potion(k , arr);
	return 0;
}

