//https://onlinejudge.org/external/15/1585.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  string test;
  int t;
  cin>>t;
  while(t--){
    cin>>test;
    int conSum = 0,result = 0;
    for(char c:test){
      if(c=='O')conSum++;
      else conSum=0;
      result+=conSum;
    }
    cout << result << endl;
  }
  return 0;
}
