// https://onlinejudge.org/external/115/11581.pdf
#include<bits/stdc++.h>
using namespace std;
const vector<pair<int,int>> dir = {
  {0,1},
  {1,0},
  {0,-1},
  {-1,0}
};

const vector<vector<int>>cycle = {
  {0,0,0},
  {0,0,0},
  {0,0,0},
};
bool isValid(int x,int y){
  return x>=0&&x<3&&y>=0&&y<3;
}
vector<vector<int>> f(vector<vector<int>> &grid){
  vector<vector<int>>result (3,vector<int>(3));
  for(int i = 0; i<3;++i){
    for(int j = 0;j<3;++j){
      int sum = 0;
      for(auto x:dir){
        if(isValid(i+x.first,j+x.second)){
          sum+=grid[i+x.first][j+x.second];
          // cout << "i: "<<i+x.first<< " j: "<< j+x.second<<endl;
          // cout << grid[i+x.first][j+x.second]<<endl;
        }
      }
      result[i][j]=sum%2;
    }
  }
  return result;
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  vector<vector<int>> grid (3,vector<int>(3));
  int t;
  cin >>t;
  while(t--){
    for(int i = 0; i<3;++i){
      for(int j = 0;j<3;++j){
        char tmp;
        cin>>tmp;
        grid[i][j]=tmp-'0';
      }
    }
    // cout << "\nGrid" << endl;
    // for(auto x:grid){
    //   for(auto y:x){
    //     cout << y << " ";
    //   }
    //   cout << endl;
    // }
    // cout << endl;
    int cnt = -1;
    while(grid!=cycle){
      grid = f(grid);
      // for(auto x:grid){
      //   for(auto y:x){
      //     cout << y << " ";
      //   }
      //   cout << endl;
      // }
      // cout << endl;
      // cout << endl;
      cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}

// f0
// 111
// 100
// 001

// f1
// 001
// 100
// 110
