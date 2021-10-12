// https://onlinejudge.org/external/115/11581.pdf
#include<bits/stdc++.h>
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
int n,r,c,k;
const vector<pair<int,int>> dir = {
  {0,1},
  {1,0},
  {0,-1},
  {-1,0}
};
bool isValid(int x,int y){
  return x>=0&&x<r&&y>=0&&y<c;
}
void f(vvi &a){
  vvi result = a;
  while(k--){
    for(int i = 0; i<r;++i){
      for(int j = 0;j<c;++j){
        for(auto x:dir){
          if(isValid(i+x.first,j+x.second)){
            bool flag = (a[i][j]+1)%(n) == (a[i+x.first][j+x.second])%(n);
            if(flag) {result[i+x.first][j+x.second]=a[i][j];}
          }
        }
      }
    }
    a = result;
  }
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  while(cin>>n>>r>>c>>k&&n){
    vvi a(r,vi(c));
    for(int i = 0;i<r;++i){
      for(int j = 0;j<c;++j){
        cin>>a[i][j];
      }
    }
    f(a);
    for(int i = 0;i<r;++i){
      for(int j = 0;j<c;++j){
        cout<<a[i][j];
        if(j<c-1)cout << " ";
      }
      cout << "\n";
    }
  }
  return 0;
}
