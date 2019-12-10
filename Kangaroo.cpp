#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main(){
  int x1,v1, x2, v2;
  cin>>x1>>v1>>x2>>v2;

  int time_var = 0;
  int temp = 0;
  int dist_diff = 0;

  while(true){
    temp = dist_diff;
    dist_diff = abs((x1 + v1*time_var) - (x2 + v2*time_var));
    if(dist_diff>=temp && time_var){
      cout<<"NO";
      break;
    }
    else if(dist_diff==0){
      cout<<"YES";
      break;
    }
    time_var++;
  }
}
