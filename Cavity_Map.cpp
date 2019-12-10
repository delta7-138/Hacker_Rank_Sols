#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
  int n;
  cin>>n;

  vector <string>rows;
  string inp;

  for(int i = 0; i<n; i++){
    cin>>inp;
    rows.push_back(inp);
  }
  int ref = n - 2;
  int depth_1 , depth_2 , depth_3 , depth_4;

  for(int i = 0; i<ref; i++){
    for(int j = 0; j<ref; j++){
      int int_ref = rows[ref - i][ref - j] - '0';

      depth_1 = rows[ref - i - 1][ref - j] - '0';
      depth_2 = rows[ref - i + 1][ref - j] - '0';

      depth_3 = rows[ref - i][ref - j + 1] - '0';
      depth_4 = rows[ref - i][ref - j - 1] - '0';

      if(int_ref>depth_1 && int_ref>depth_2 && int_ref>depth_3 && int_ref>depth_4){
        rows[ref - i][ref - j] = 'X';
      }
    }
  }

  for(int i = 0; i<n; i++){
    cout<<rows[i]<<endl;
  }
}
