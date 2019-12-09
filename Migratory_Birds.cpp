#include <iostream>
#include <algorithm>
#include <vector>
#define LARGE 200000
using namespace std;
int main()
{
  vector <int>arr_inp;
  int n, inp;
  cin>>n;
  for(int i = 0; i<n; i++){
    cin>>inp;
    arr_inp.push_back(inp);
  }
  vector <int>arr_key;
  for(int i = 1; i<=5;i++){
    arr_key.push_back(0);
  }

  for(int i = 0; i<n; i++){
    arr_key[arr_inp[i]-1]++;
  }
  
  int max_freq = *max_element(arr_key.begin() , arr_key.end());

  for(int i = 0; i<5;i++){
    if(arr_key[i]==max_freq){
      cout<<(i+1);
      break;
    }
  }
}
