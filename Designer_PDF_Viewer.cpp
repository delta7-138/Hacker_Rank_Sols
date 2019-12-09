#include <iostream>
#include <vector>
#include <string>

using namespace std;

int designer_pdf(int g1[26], string str)
{
	int max = g1[0];
	for(int i = 0; i<str.length() ; i++)
	{
		if(max<g1[str[i]-97])
		{
			max = g1[str[i]-97];
		}
	}

	int area = max * str.length();

	return area;
}

int main()
{
	int arr[26];

	for(int i = 0; i<26; i++)
	{
		cin>>arr[i];
	}

	string str;
	cin>>str;

	int ans = designer_pdf(arr , str);

	cout<<ans;

	return 0;
}


	
		
