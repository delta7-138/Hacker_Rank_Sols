#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int arr[100000];
	int n,t;
	cin>>n>>t;
	for(int k = 0; k<n; k++)
		cin>>arr[k];
	int i,j;
	vector <int>ans;
	for(int k = 0; k<t; k++)
	{
		cin>>i>>j;
		ans.push_back(*min_element(arr + i , arr + j+1));
	}
	for(int k = 0; k<t; k++)
		cout<<ans[k]<<endl;
	return 0;
}

