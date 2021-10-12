//https://onlinejudge.org/external/126/12667.pdf
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
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int n,t,m;
  cin>>n>>t>>m;
  vector<pair<int,int>>a(n,make_pair(-(1e9),-1));
  int mem[t+1][n+1];
  for(int i = 0; i<t+1;++i){
    for(int j = 0;j<n+1;++j){
      mem[i][j] = 0;
    }
  }
  while(m--){
    int time, team;
    char problem;
    string veredict;
    cin>>time>>team>>problem>>veredict;
    if(veredict == "Yes" && !mem[team][problem-'A']) a[problem-'A'] = make_pair(time,team);
    if(veredict == "Yes") mem[team][problem-'A'] = 1;
  }
  for(int i = 0;i<n;++i){
    char c = i+'A';
    if(a[i].first == -(1e9)) cout << c << " -"<<" -"<< "\n";
    else cout << c << " " << a[i].first << " " << a[i].second <<"\n";
  }
  return 0;
}
