#include <string>
#include <iostream>

using namespace std;

int main()
{
	string str;
	cin>>str;
	int len = str.length();
	string ref = "";
	while(ref.length()!=len)
	{
		ref = ref + "SOS";
	}
	int count = 0;
	for(int i = 0; i<len; i++)
	{
		if(str[i]!=ref[i])
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}

