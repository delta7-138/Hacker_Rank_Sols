#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
long num_sq(long a , long b){
  double low = (long)(ceil(sqrt(a)));
  double upp = (long)(floor(sqrt(b)));

  return (upp-low + 1);
}
int main(){
  int q;
  long a , b;
  vector <int>ans;
  cin>>q;

  for(int i = 0; i<q; i++){
    cin>>a>>b;
    ans.push_back(num_sq(a , b));
  }

  for(int i = 0; i<q; i++){
    cout<<ans[i]<<endl;
  }
}
