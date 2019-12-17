#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
using namespace std;
int main(){
  int n, inp;
  cin>>n;

  vector <int>arr_inp;
  vector <int>min_diff;
  for(int i = 0; i<n; i++){
    cin>>inp;
    arr_inp.push_back(inp);
  }

  for(int i = 0; i<n; i++){
    int ctr_1 = 0 , ctr_2 = 0;
    for(int j = 0; j<n; j++){
      if(j!=i){
        int ref = arr_inp[i] + 1;
        if(arr_inp[j]==ref || arr_inp[j]==arr_inp[i])
          ctr_1++;

        ref = arr_inp[i]-1;
        if(arr_inp[j]==ref || arr_inp[j]==arr_inp[i])
          ctr_2++;
      }
    }
    min_diff.push_back(ctr_1);
    min_diff.push_back(ctr_2);
  }
  int max = *max_element(min_diff.begin() , min_diff.end());
  cout<<max+1;
}
