#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  if(n%2==0){
    n = n + 1;
  }

  int num_turns_first = 0 , num_turns_back = 0;
  int page_num;
  cin>>page_num;

  if(page_num%2==0)
    page_num+=1;

  num_turns_first = (page_num-1)/2;
  num_turns_back = (n - page_num)/2;

  if(num_turns_back>=num_turns_first)
    cout<<num_turns_first;
  else
    cout<<num_turns_back;
}
