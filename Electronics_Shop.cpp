#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int b,n,m, inp;
  cin>>b>>n>>m;
  vector <int>arr_1,  arr_2;

  for(int i = 0; i<n; i++){
    cin>>inp;
    arr_1.push_back(inp);
  }

  for(int i = 0; i<m; i++){
    cin>>inp;
    arr_2.push_back(inp);
  }

  vector <int>amounts;
  int ctr = 0;

  for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
      if(arr_1[i] + arr_2[j]<=b){
        amounts.push_back(arr_1[i] + arr_2[j]);
        ctr++;
      }
    }
  }
  if(ctr==0){
    cout<<"-1";
  }
  else{
    int max_amount = *max_element(amounts.begin() , amounts.end());

    cout<<max_amount;
  }
}
