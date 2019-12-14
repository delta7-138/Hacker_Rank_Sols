#include <iostream>
#include <vector>
using namespace std;
int compare(vector <int>date1 , vector<int>date2){
  int y1 = date1[2] , y2 = date2[2];
  int m1 = date1[1] , m2 = date2[1];
  int d1 = date1[0] , d2 = date2[0];

  if(y1>y2){
    return 1;
  }
  else if(y1<y2){
    return 0;
  }

  if(m1>m2){
    return 1;
  }
  else if(m1<m2){
    return 0;
  }

  if(d1>d2){
    return 1;
  }
  else if(d1<d2){
    return 0;
  }

  return 0;
}
int main(){
  vector <int>date1 , date2;
  int fine = 0, inp = 0;

  for(int i = 0; i<3; i++)
  {
    cin>>inp;
    date1.push_back(inp);
  }

  for(int i = 0; i<3; i++)
  {
    cin>>inp;
    date2.push_back(inp);
  }

  if(compare(date1 , date2)==0){
    fine = 0;
  }
  else{
    int y1 = date1[2] , y2 = date2[2];
    int m1 = date1[1] , m2 = date2[1];
    int d1 = date1[0] , d2 = date2[0];

    if(y1==y2){

      if(m1==m2){
        fine = (d1-d2) * 15;
      }else{
        fine = (m1-m2) * 500;
      }

    }
    else{
      fine = 10000;
    }
  }
  cout<<fine;
}
