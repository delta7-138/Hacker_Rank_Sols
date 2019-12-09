#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr[100000];
	int arr2[100000];

	int n,k,q;
	cin>>n>>k>>q;
	k = k%n;
        for(int i = 0; i<n ; i++)
	{
	     cin>>arr[i];
        }
        for(int i = 0; i<n; i++)
	{
	     if(i+k>=n)
	     {
	          arr2[i+k-n] = arr[i];
             }
             else
	     { 
	          arr2[i+k] = arr[i];
             }
	} 
	vector <int>g1;
	int inp;
	for(int i = 0; i<q; i++)
	{
		cin>>inp;
		g1.push_back(inp);
	}

	for(int i = 0; i<q;i++)
	{
		cout<<arr2[g1[i]]<<endl;
	}
	return 0;
}


