#include <iostream>
#include <cstring>
using namespace std;
int str_to_int(string num_str){
  int num = 0;
  int len = num_str.length();
  for(int i = 0; i<len; i++){
    num = num * 10 + num_str[i]-'0';
  }
  return num;
}

string int_to_str(int num){
    char str[5];
    int j =0;
    while(num!=0){
      str[j] = (char)(num%10 + '0');
      num = num/10;
      j++;
    }
    char rev_str[5];
    for(int i = 0; i<=j; i++){
      rev_str[i] = str[j-i-1];
    }
    return rev_str;
}

int main(){
  string time_n;
  cin>>time_n;

  string time;
  time = time_n.substr(0 , 8);

  char chk = time_n[8];
  if(chk=='P'){
    int temp = str_to_int(time_n.substr(0 , 2));
    if(temp!=12){
      temp = temp + 12;
      string temp_str = int_to_str(temp);
      time[0] = temp_str[0];
      time[1] = temp_str[1];
    }
  }
  else if(chk=='A'){
    int temp = str_to_int(time_n.substr(0 , 2));
    if(temp==12){
      time[0]= '0';
      time[1] = '0';
    }
  }
  cout<<time;
}
