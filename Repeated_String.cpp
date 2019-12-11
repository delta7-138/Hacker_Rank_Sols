#include <iostream>
#include <string>
using namespace std;
long find_ans(string str , long n){
  int flip = 0;
  for(int i = 0; i<str.length(); i++){
    if(str[i]=='a'){
      flip++;
  }
}
  if(flip==0){
    return 0;
  }

  int len = str.length();
  long ans = n/len * flip;
  int excess = n%len;

  int ans_ex = 0;
  for(int i = 0; i<excess; i++){
    if(str[i]=='a')
      ans_ex++;
  }
  ans = ans + ans_ex;
  return ans;

}
int main(){
  string str;
  cin>>str;

  long n;
  cin>>n;
  long ans = find_ans(str , n);
  cout<<ans;
}
