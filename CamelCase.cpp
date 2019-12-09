#include <iostream>
#include <string>
using namespace std;
int number_of_words(string str)
{
	int count = 0;
	for(int i = 0; i<str.length(); i++)
	{
		if(str[i]>='A' && str[i]<='Z')
			count++;
	}
	return (count+1);
}
int main()
{
	string str;
	cin>>str;
	cout<<number_of_words(str);
	return 0;
}


