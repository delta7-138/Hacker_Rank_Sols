#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;
string check_funny(string str)
{
	char rev_str[10000];
	for(int i = 0; i<str.length();i++)
	{
		rev_str[str.length()-i-1] = str[i];
	}

	vector <int>diff1;
	vector <int>diff2;

	for(int i = 0;i<str.length()-1; i++)
	{
		diff1.push_back(abs(str[i+1]-str[i]));
		diff2.push_back(abs(rev_str[i+1]-rev_str[i]));
	}
	for(int i = 0; i<diff1.size(); i++)
	{
		if(diff1[i]!=diff2[i])
			return "Not Funny";
	}
	return "Funny";

}
int main()
{
	int t;
	cin>>t;
	vector <string> str;
	string str_res;
	for(int i = 0; i<t; i++)
	{
		cin>>str_res;
		str.push_back(str_res);
	}
	for(int i = 0;i<t;i++)
		cout<<check_funny(str[i])<<endl;
	return 0;
}


