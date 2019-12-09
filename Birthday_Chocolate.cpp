#include <iostream>
#include <vector>
using namespace std;
int sum(vector <int>arr){
  int sum = 0;
  for(int i = 0; i<arr.size(); i++){
    sum+=arr[i];
  }
  return sum;
}
int main(){
  int n, inp;
  cin>>n;
  vector <int>s_nums;

  for(int i = 0; i<n; i++){
    cin>>inp;
    s_nums.push_back(inp);
  }

  int d,m;
  cin>>d>>m;

  vector <int>sum_sq;

  for(int i = 0; i<n-m+1; i++){
    vector <int>sliding_win;
    for(int j = 0; j<m; j++){
      sliding_win.push_back(s_nums[i + j]);
    }
    sum_sq.push_back(sum(sliding_win));
  }
  int ctr= 0;

  for(int i = 0; i<sum_sq.size(); i++){
    if(sum_sq[i]==d)
      ctr++;
  }
  cout<<ctr;
}
