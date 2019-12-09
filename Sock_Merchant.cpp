#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n;
  cin>>n;

  int arr_inp[101];
  int arr_key[101];

  for(int i = 0; i<101; i++){
    arr_key[i]=0;
  }

  for(int i = 0; i<n; i++){
    cin>>arr_inp[i];
    arr_key[arr_inp[i]]++;
  }

  int num_pairs = 0;
  for(int i = 0; i<101; i++){
    num_pairs = num_pairs + arr_key[i]/2;
  }
  cout<<num_pairs;
}
