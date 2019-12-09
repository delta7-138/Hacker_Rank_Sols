#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int reverse(int a){
  int rev = 0 , rem = 0;
  while(a!=0){
    rem = a%10;
    a = a/10;
    rev = rev * 10 + rem;
  }
  return rev;
}
int main(){
  int i , j , k, count_days = 0;
  cin>>i>>j>>k;

  for(int ctr = i; ctr<=j; ctr++){
    if(abs(ctr-reverse(ctr))%k==0)
      count_days++;
  }
  cout<<count_days;
}
