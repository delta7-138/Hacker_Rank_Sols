#include <iostream>

using namespace std;

int main()
{
	string str;

	int n;

	cin>>n;
	cin>>str;
	int k;
	cin>>k;
	k = k%26;
	for(int i = 0;i<n;i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			if(str[i]+k<65)
			{
				cout<<(char)(str[i]+k+26);
			}
			else if(str[i]+k>90)
			{
				cout<<(char)(str[i]+k-26);
			}
			else
			{
				cout<<(char)(str[i]+k);
			}
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			if(str[i]+k<97)
			{
				cout<<(char)(str[i]+k+26);
			}
			else if(str[i]+k>122)
			{
				cout<<(char)(str[i]+k-26);
			}
			else
			{
				cout<<(char)(str[i]+k);
			}
		}
		else
		{
			cout<<str[i];
		}
		
	}
	return 0;
}


