#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(){
  int n, inp;
  cin>>n;
  map<int , int> count_elements;
  vector <int>arr_inp;

  for(int i = 0; i<n; i++){
    cin>>inp;
    arr_inp.push_back(inp);
    if(!count_elements.count(inp))
      count_elements.insert(pair<int , int>(inp , 0));
  }

  for(int i = 0; i<arr_inp.size(); i++){
    count_elements[arr_inp[i]]++;
  }
  int max_num = 0, max_key = 0;
  for(int i = 0; i<count_elements.size(); i++){
    if(max_num<=count_elements[i]){
      max_num = count_elements[i];
      max_key = i;
    }
  }
  cout<<(n - max_num);
}
