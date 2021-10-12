// https://onlinejudge.org/external/113/11360.pdf
#include<bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vs vector <string>
using namespace std;
int n;
vvi transpose(vvi &m){
  vvi result(n,vi(n));
  for(int i = 0;i<n;++i){
    for(int j=0;j<n;++j){
      result[j][i] = m[i][j];
    }
  }
  return result;
}

void row(vvi &m,int a,int b){
  vi tmp = m[a];
  m[a] = m[b];
  m[b] = tmp;
}

void col(vvi &m,int a,int b){
  vvi result(n,vi(n));
  for(int i = 0; i<n;++i){
    int tmp = m[i][a];
    m[i][a]= m[i][b];
    m[i][b] = tmp;
  }
}

void inc(vvi &m){
  for(int i = 0; i<n;++i){
    for(int j = 0; j<n;++j){
      m[i][j]+=1;
      m[i][j]%=10;
    }
  }
}

void dec(vvi &m){
  for(int i = 0; i<n;++i){
    for(int j = 0; j<n;++j){
      m[i][j]-=1;
      if(m[i][j]<0)m[i][j]+=10;
      m[i][j]%=10;
    }
  }
}

int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int t,caseN=0;
  cin>>t;
  while(t--){
    int m2;
    cin>>n;
    vvi m(n,vi(n,0));
    for(int i = 0; i<n;++i){
      for(int j = 0; j<n;++j){
        char c;
        cin>>c;
        m[i][j]=c-'0';
      }
    }
    cin>>m2;
    while(m2--){
      string op;
      cin>>op;
      if(op == "transpose"){
        m = transpose(m);
      }
      else if(op == "row"){
        int a,b;
        cin>>a>>b;
        row(m,--a,--b);
      }
      else if(op == "col"){
        int a,b;
        cin>>a>>b;
        col(m,--a,--b);
      }
      else if(op == "inc"){
        inc(m);
      }
      else{
        dec(m);
      }
    }
    cout << "Case #"<<++caseN<<"\n";
    for(vi x: m){
      for(int y:x){
        cout << y;
      }
      cout << "\n";
    }
    cout << "\n";
  }
  return 0;
}
