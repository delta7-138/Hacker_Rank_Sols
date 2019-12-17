#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n, d , inp, outer_ctr = 0, ctr = 1;
  cin>>n>>d;

  vector <int>arr_inp;
  for(int i = 0; i<n; i++){
    cin>>inp;
    arr_inp.push_back(inp);
  }
  for(int i = 0; i<n; i++){
    ctr = 1;
    for(int j = i+1; j<n; j++){
      if(arr_inp[j] - arr_inp[i]==d*ctr){
        ctr++;
      }
      if(ctr==3){
        outer_ctr++;
        break;
      }
    }
  }

  cout<<outer_ctr;
}
