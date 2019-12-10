#include <iostream>
#include <vector>
using namespace std;
int num_chocs(int bars , int wrappers , int m){
  while(true){
    bars = bars + wrappers/m;
    wrappers = wrappers%m + wrappers/m;
    if(wrappers<m){
      break;
    }
  }
  return bars;
}
int main(){
  int t, n , cost, m;
  cin>>t;
  vector <int>ans;

  for(int i = 0; i<t; i++){
    cin>>n>>cost>>m;
    ans.push_back(num_chocs(n/cost , n/cost, m));
  }

  for(int i = 0; i<t; i++){
    cout<<ans[i]<<endl;
  }
}
