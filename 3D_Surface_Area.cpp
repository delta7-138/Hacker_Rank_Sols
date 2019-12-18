#include <iostream>
#include <vector>
using namespace std;
int surface_area(int w){
  int area = 0;
  area = 2 * (1 + 2 * w);
  return area;
}
int main(){
  int h, w, inp;;
  cin>>h>>w;

  vector <vector <int>>arr_inp;
  for(int i = 0; i<h; i++){
    vector <int>tmp;
    for(int j = 0; j<w; j++){
      cin>>inp;
      tmp.push_back(inp);
    }
    arr_inp.push_back(tmp);
  }
  int area = 0;
  for(int i = 0; i<h; i++){
    for(int j = 0; j<w; j++){
      int cell_1 = 0 , cell_2 = 0 , cell_3 = 0 , cell_4 = 0;
      if(i-1>=0)
        cell_1 = arr_inp[i-1][j];
      if(j-1>=0)
        cell_2 = arr_inp[i][j-1];
      if(i+1<h)
        cell_3 = arr_inp[i+1][j];
      if(j+1<w)
        cell_4 = arr_inp[i][j+1];

      if(cell_1>arr_inp[i][j])
        cell_1 = arr_inp[i][j];

      if(cell_2>arr_inp[i][j])
        cell_2 = arr_inp[i][j];

      if(cell_3>arr_inp[i][j])
        cell_3 = arr_inp[i][j];

      if(cell_4>arr_inp[i][j])
        cell_4 = arr_inp[i][j];
      area = area + surface_area(arr_inp[i][j]) - cell_1 - cell_2 - cell_3 - cell_4;
    }
  }
  cout<<area;
}
