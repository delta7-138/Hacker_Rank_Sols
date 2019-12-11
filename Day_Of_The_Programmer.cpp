#include <iostream>
#include <vector>
using namespace std;
bool check_validity(vector <int>date){
  int y = date[2];
  int arr_ref[] = {31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31, 30 , 31};

  if(y>=1700 && y<=1917){
    if(y%4==0){
      arr_ref[1] = 29;
    }else{
      arr_ref[1] = 28;
    }
  }
  else if(y>=1918){
    if(y%4==0){

      if(y%400!=0 && y%100==0){
        arr_ref[1] = 28;
      }
      else{
        arr_ref[1] = 29;
      }
    }
    else{
      arr_ref[1] = 28;
    }
   }

     if(date[1]==2  && y==1918){
       if(date[2]>=1 && date[2]<14){
         return false;
       }
   }
   if(date[0]>arr_ref[date[1]-1]){
     return false;
   }
   return true;

}
vector <int> increment_date(int year , int count){
  vector <int>date;
  date.push_back(1);
  date.push_back(1);
  date.push_back(year);

  int ctr = 0;
  while(ctr<count-1){
    date[0]++;
    if(!check_validity(date)){
      if(date[2]!=1918 || date[1]!=2){
      date[0] = 1;
      date[1]++;
    }
      else{
        date[0] = 14;
        date[1]++;
      }
    }
    ctr++;
  }
  return date;
}

int main(){
  int year;
  cin>>year;

  vector <int>final_date;
  final_date = increment_date(year , 256);
  cout<<final_date[0]<<"."<<"0"<<final_date[1]<<"."<<final_date[2];
}
