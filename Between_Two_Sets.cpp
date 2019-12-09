#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool is_factor_of(vector <int>arr , int t){
  for(int i = 0; i<arr.size(); i++){
    if(arr[i]%t!=0)
      return false;
  }
  return true;
}

bool are_factors(vector <int>arr , int t){
  for(int i = 0; i<arr.size(); i++){
    if(t%arr[i]!=0)
      return false;
  }
  return true;
}
int main(){
  int n,m, inp, ctr = 0;
  cin>>n>>m;
  vector <int>arr_1 , arr_2;

  for(int i = 0; i<n; i++){
    cin>>inp;
    arr_1.push_back(inp);
  }

  for(int i = 0; i<m; i++){
    cin>>inp;
    arr_2.push_back(inp);
  }

  int max = *max_element(arr_1.begin() , arr_1.end());
  int min = *min_element(arr_2.begin() , arr_2.end());

  for(int i = max; i<=min; i++){
    if(is_factor_of(arr_2 , i) && are_factors(arr_1 , i))
      ctr++;
  }
  cout<<ctr;
}
