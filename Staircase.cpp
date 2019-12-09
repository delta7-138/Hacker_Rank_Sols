#include <iostream>
using namespace std;
int main()
{
	int n; 
	cin>>n;
	for(int i = n; i>=1; i--)
	{
		for(int j = 1; j<=i; j++)
		{
			if(i==j)
				cout<<"#";
			else
				cout<<" ";
		}
		for(int k = 0; k<n-i; k++)
			cout<<"#";
		cout<<endl;
	}
	return 0;
}

