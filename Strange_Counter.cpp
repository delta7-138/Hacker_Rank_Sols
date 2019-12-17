#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
long power_by_two(long n){
  long ans = 1;
  for(int i = 0; i<n; i++){
    ans = ans * 2;
  }
  return ans;
}
int main(){
  long t;
  cin>>t;
  long value = 0;
  if(t>=1 && t<=3){
    value = 4 - t;
  }
  else if(t>=4 && t<=9){
    value = 10 - t;
  }
  else{
    long ref = (long)(ceil((log((t-3)/6.0 + 1)/log(2))));
    long upp = (power_by_two(ref) - 1) * 6 + 3;

    value = upp + 1 - t;

  }
  cout<<value;
}
