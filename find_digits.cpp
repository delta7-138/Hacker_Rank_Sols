#include <iostream>
#include <string>
#include <vector>
using namespace std;
int dig_fac(string s)
{
	int count = 0;
	for(int i = 0; i<s.length(); i++)
	{
		if(s[i]!='0')
		{
			if(stoi(s)%(s[i]-'0')==0)
			     count++;
		}
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	vector <string>str;
	string inp;
	for(int i = 0; i<t; i++)
	{
		cin>>inp;
		str.push_back(inp);
	}
	for(int i = 0; i<t; i++)
		cout<<dig_fac(str[i])<<endl;
	return 0;
}


