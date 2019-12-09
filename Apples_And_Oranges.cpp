#include <iostream>
#include <vector>
using namespace std;
int main(){
  int s, t;
  cin>>s>>t;

  int a, b;
  cin>>a>>b;

  int m,n;
  cin>>m>>n;

  vector <int>d_apples;
  vector <int>d_oranges;

  int inp, ctr_a = 0 , ctr_b = 0;

  for(int i = 0;i<m;i++){
    cin>>inp;
    d_apples.push_back(inp + a);
    if(d_apples[i]>=s && d_apples[i]<=t){
      ctr_a++;
    }
  }

  for(int i = 0; i<n; i++){
    cin>>inp;
    d_oranges.push_back(inp + b);
    if(d_oranges[i]>=s && d_oranges[i]<=t){
      ctr_b++;
    }
  }
  cout<<ctr_a<<endl<<ctr_b;
}
