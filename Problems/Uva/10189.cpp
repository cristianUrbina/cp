//https://onlinejudge.org/external/101/10189.pdf
#include<bits/stdc++.h>
#define vs vector<string>
using namespace std;
void a(vector<string> &field,int x,int y){
  for(int i = x-1;i<=x+1;++i){
    for(int j = y-1;j<=y+1;++j){
      if(i>=0&&i<field.size()&&j>=0&&j<field[i].size()&&field[i][j]!='*'){
        field[i][j]++;
      }

    }
  }
}
int main(){
  int n,m,fieldNo=0;
  while(cin>>n>>m&&n!=0){
    vs field(n);
    if(fieldNo) cout << endl;
    for(int i = 0; i<field.size();++i){
      cin>>field[i];
    }
    for(int i = 0; i<n;++i){
      for (int j = 0; j<m; ++j){
        if(field[i][j]=='.'){
          field[i][j]='0';
        }
      }
    }
    for(int i = 0; i<n;++i){
      for (int j = 0; j<m; ++j){
        if(field[i][j]=='*'){
          a(field,i,j);
        }
      }
    }
    cout<<"Field #"<<++fieldNo<<":"<<endl;
    for(string x: field){
      cout << x << endl;
    }
  }


  return 0;
}
