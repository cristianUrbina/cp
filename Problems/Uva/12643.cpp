//https://onlinejudge.org/external/126/12643.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,i,j,players,match;
  while(cin>>n>>i>>j){
    players = 1<<n;
    bool flag = false;
    match = n;
    int sup=players, inf=1;
    while(!flag){
      int division = (sup+inf)/2;
      if(i<=division&&j<=division){
        sup = division;
        match--;
      }
      else if(i>division&&j>division){
        inf = division;
        match--;
      }
      else flag = true;
    }
    cout << match << endl;
  }

  return 0;
}
