//https://onlinejudge.org/external/108/10813.pdf
#include<bits/stdc++.h>
using namespace std;
vector<bool> numbers(75,false);
vector<vector<int>> card(5,vector<int>(5));
bool wins(){
  bool flag = false;
  int cnt = 0;
  //Vertical
  for(int i = 0;i<5;++i){
    cnt = 0;
    for (int j=0;j<5;++j){
      if(i==2&&j==2)cnt++;
      else if(numbers[card[i][j]-1]) cnt++;
      else{}
    }
    if(cnt==5)return true;
  }
  //Horizontal
  for(int i = 0;i<5;++i){
    cnt = 0;
    for (int j=0;j<5;++j){
      if(i==2&&j==2)cnt++;
      else if(numbers[card[j][i]-1]) cnt++;
      else{}
    }
    if(cnt==5)return true;
  }
  //Diagonals
  cnt = 0;
  for(int i = 0;i<5;++i){
    if(i==2)cnt++;
    else if(numbers[card[i][i]-1]) cnt++;
    else{}
    if(cnt==5)return true;
  }
  cnt = 0;
  for(int i = 4;i>=0;--i){
    if(i==2)cnt++;
    else if(numbers[card[i][4-i]-1]) cnt++;
    else{}
    if(cnt==5)return true;
  }
  return flag;
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int t;
  cin>>t;
  while(t--){
    numbers=vector<bool>(75,false);
    for(int i = 0;i<5;++i){
      for (int j=0;j<5;++j){
        if(i==2&&j==2) continue;
        cin>>card[i][j];
      }
    }
    int number,announced = 0;
    bool win=false;
    for(int i = 0; i<75; ++i){
      cin>>number;
      numbers[number-1]=true;
      if(!win){
        announced++;
        if(wins()) {
          win = true;
        }
      }
    }
    cout<<"BINGO after "<<announced<<" numbers announced\n";
  }
  return 0;
}
