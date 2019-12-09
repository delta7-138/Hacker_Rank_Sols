#include <iostream>

using namespace std;

int count_val(int n  , string str)
{
	int ctr = 0 , flip = 0 , count = 0;
	for(int i = 0; i<n ; i++)
	{
		if(str[i]=='U')
		{
			ctr++;
		}
		else
		{
			ctr--;
		}
		if(ctr>0)
			flip = 1;
		else if(ctr<0)
			flip = 0;

		if(ctr==0)
		{
			if(flip==0)
				count++;
		}

	}
	return count;
}

		
		
		
int main()
{
	string str;
	int n;

	cin>>n;
	cin>>str;

	int a = count_val(n , str);

	cout<<a;
	return 0;
}


