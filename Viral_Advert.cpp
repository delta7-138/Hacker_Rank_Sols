#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int d;
	cin>>d;
	int likes = 2 , shares = 2 , cum_like = 2;
	for(int i = 2; i<=d; i++)
	{
		shares = likes * 3;
		likes = floor(shares/2);
		cum_like+=likes;
	}
	cout<<cum_like;
	return 0;
}


