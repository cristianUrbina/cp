//https://onlinejudge.org/external/103/10363.pdf
#include<bits/stdc++.h>
using namespace std;
bool wins(char player,const vector<string>&grid){
  bool flag = false;
  //horizontal--------------
  for(int i = 0; i<3;++i){
    int cnt=0;
    for(char c: grid[i]){
      if(c==player)cnt++;
    }
    if(cnt==3) return true;
  }
  //vertical-------------------
  for(int i = 0; i<3;++i){
    int cnt=0;
    for(int j = 0; j<3;++j){
      if(grid[j][i]==player)cnt++;
    }
    if(cnt==3) return true;
  }
  //diagonals-------------------
  //This is not needed since is not possible that the 2 players win
  // if at least one wins with a diagonal.
  // Okay it is necessary
  int cnt = 0;
  for(int i = 0;i<3;++i){
    if(grid[i][i]==player)cnt++;
  }
  if(cnt==3) return true;
  cnt = 0;
  for(int i = 2;i>=0;--i){
    if(grid[i][2-i]==player)cnt++;
  }
  if(cnt==3) return true;

  return flag;
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  vector<string> grid(3);
  int t;
  cin>>t;
  while(t--){
    for(int i = 0; i<3; ++i){
      cin>>grid[i];
    }
    int x=0,o=0;
    for(string s: grid){
      for(char c: s){
        if(c=='X')++x;
        else if(c=='O')++o;
        else{}
      }
    }
    bool possible = true;
    if(x!=o&&x!=o+1){
      possible = false;
    }
    else if(wins('O',grid)&&x!=o){
      possible = false;
    }
    else if(wins('X',grid)&&x!=o+1){
      possible = false;
    }
    else if(wins('X',grid)&&wins('O',grid)){
      possible = false;
    }
    else{}
    if(possible){
      cout<<"yes\n";
    }
    else cout<<"no\n";
  }
  return 0;
}
