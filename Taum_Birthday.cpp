#include <iostream>
#include <vector>
using namespace std;
long int min_cost(long int b , long int w , long int bc , long int wc , long int z){
	if(bc<wc){
		if(bc + z<=wc){
			wc = bc + z;
		}
	}
	else if(bc>wc){
		if(wc + z<=bc)
			bc = wc + z;
	}
	return (bc * b + wc * w);
}
int main(){
	long int t, b, w, bc, wc , z;
	cin>>t;

	vector <long int>ans;
	for(int i = 0; i<t; i++){
		cin>>b>>w>>bc>>wc>>z;
		ans.push_back(min_cost(b , w , bc , wc , z));
	}

	for(int i = 0; i<t; i++){
		cout<<ans[i]<<endl;
	}
}
