#include<bits/stdc++.h>
#include "stringOp.cpp"
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long>
#define vvl vector<vector<long>>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define vs vector <string>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  // long long n;
  // cin>>n;
  // vector<long long> tmp = factorize(n);
  // for(auto x:tmp){
  //   cout << x << " ";
  // }
  // cout << "\n";
  // cout << multString("0","0")<<endl;
  // cout << divS("1","6").first << endl;
  // cout << restString("101011010","19232313") << endl;
  vs a = {"-2","2","-30"};
  string result = "1";
  for(string x:a){
    result = multString(result,x);
  }
  cout << result << endl;
  // pair<string,string> a = divString("2043", "21");

  // cout << a.first << " " << a.second << endl;
  // cout << multString("5","10200") << endl;

  // cout << (-128-45) << endl;
  return 0;
}
//     5
// 10200
//     0
//    00
//   100
