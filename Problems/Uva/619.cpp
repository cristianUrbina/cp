//https://onlinejudge.org/external/6/619.pdf
#include<bits/stdc++.h>
#include "pre-coded/stringOp.cpp"
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long>
#define vvl vector<vector<long>>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define vs vector<string>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  string s,result = "0";
  while(cin>>s&&s!="*"){
    if(s[0].isDigit()){
      
    }
    else {
      for(int i = s.size()-1,m=0;i>=0;--i,m++){
        string tmp = multString(powString("26",m),to_string(s[i]-'a'+1));
        cout << tmp << endl;
        result = sumString(result,tmp);
      }
      cout << result << endl;
    }
  }
  return 0;
}
