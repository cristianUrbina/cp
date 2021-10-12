//https://onlinejudge.org/external/130/13048.pdf
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
bool valid(const string &s,int i){
  if(s[i]=='D'||s[i]=='B'||s[i]=='S') return 0;
  if(i+1<s.size()&&s[i+1]=='B'||i+2<s.size()&&s[i+2]=='B') return 0;
  if(i-1>=0&&s[i-1]=='S'||i+1<s.size()&&s[i+1]=='S') return 0;
  return 1;
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int t,caseN=0;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int cnt=0;
    for(int i = 0; i<s.size();++i){
      if(valid(s,i)) ++cnt;
    }
    cout << "Case " << ++caseN << ": " <<cnt << "\n";
  }
  return 0;
}
