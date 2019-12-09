#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
string whowins(vector <int>query){
    int diff_cat_A = abs(query[2]-query[0]);
    int diff_cat_B = abs(query[2]-query[1]);

    if(diff_cat_A<diff_cat_B)
      return "Cat A";
    else if(diff_cat_A>diff_cat_B)
      return "Cat B";
    else
      return "Mouse C";
}
int main(){
  int n_queries, inp_1, inp_2, inp_3;
  cin>>n_queries;
  vector <string>ans;

  for(int i = 0; i<n_queries; i++){
    vector <int>inp;
    cin>>inp_1>>inp_2>>inp_3;
    inp.push_back(inp_1);
    inp.push_back(inp_2);
    inp.push_back(inp_3);
    ans.push_back(whowins(inp));
  }

  for(int i = 0; i<ans.size(); i++){
    cout<<ans[i]<<endl;
  }
}
