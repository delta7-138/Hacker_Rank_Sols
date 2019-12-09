#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
void displ_st(vector <int>arr)
{
	if(*min_element(arr.begin() , arr.end())<1001)
	{
		int ctr = 0;
		int min = *min_element(arr.begin() , arr.end());
		for(int i = 0; i<arr.size(); i++)
		{
			if(arr[i]!=1001)
			{
				if(arr[i]==min)
					arr[i]=1001;
				else
				{
					arr[i]=arr[i]-min;
				}
				ctr++;
			}
		}
		cout<<ctr<<endl;
		displ_st(arr);
	}
}
int main()
{
	int n;
	int inp;
	cin>>n;
	vector <int>arr;
	for(int i = 0; i<n; i++)
	{
		cin>>inp;
		arr.push_back(inp);
	}
	displ_st(arr);
	return 0;
}

