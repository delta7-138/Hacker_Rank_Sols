#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr[1000];
	int t , size = 0;
	vector <int>g1;
	cin>>t;
	for(int i = 0; i<t ; i++)
	{
		int n, thresh;
		cin>>n>>thresh;

		int count = 0;
		for(int j = 0; j<n ; j++)
		{
			cin>>arr[j];
			if(arr[j]<=0)
				count++;
		}
		if(count>=thresh)
		{
			g1.push_back(1);
			size++;
		}
		else
		{
			g1.push_back(0);
			size++;
		}
	}

	for(int i = 0; i<size; i++)
	{
		if(g1[i]==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}



