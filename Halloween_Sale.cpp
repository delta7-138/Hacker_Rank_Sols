#include <iostream>
#include <vector>
using namespace std;
int main(){
  int p, d, m , s;
  int ctr = 0 , cost = 0;
  cin>>p>>d>>m>>s;
  while(p>m){
    cost+=p;
    p-=d;
    if(cost>=s){
      break;
    }
    ctr++;
  }
  if(cost<s){
    int diff = s-cost;
    ctr = ctr + (diff)/m;
    cout<<ctr;
  }else{
    cout<<ctr;
  }
}
