//https://onlinejudge.org/external/112/11222.pdf
#include<bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long>
#define vvl vector<vector<long>>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define vs vector <string>
using namespace std;
bool cmp(const pair<vi,int> &a,const pair<vi,int> &b){
  if(a.first.size()==b.first.size()){
    return a.second<b.second;
  }
  else return a.first.size()>b.first.size();
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int t,caseN=0;
  cin>>t;
  while(t--){
    vvi a(3);
    vvi problems(10001);
    for(int i = 0; i<3;++i){
      int s;
      cin>>s;
      while(s--){
        int tmp;
        cin>>tmp;
        a[i].push_back(tmp);
        problems[tmp].push_back(i);
      }
    }
    vector<pair<vi,int>> b(3);
    for(int i = 0; i<a.size();++i){
      b[i].second = i+1;
      for(int j = 0; j<a[i].size();++j){
        if(problems[a[i][j]].size()==1){
          b[i].first.push_back(a[i][j]);
        }
      }
      sort(b[i].first.begin(),b[i].first.end());
    }
    sort(b.begin(),b.end(),cmp);
    cout << "Case #"<<++caseN<<":\n";
    int checker = b[0].first.size();
    for(int i = 0; i<b.size()&&b[i].first.size()==checker;++i){
      if(i)cout << "\n";
      cout << b[i].second << " " << b[i].first.size();
      if(b[i].first.size()) cout << " ";
      for(int j = 0;j<b[i].first.size();++j){
        cout << b[i].first[j];
        if(j<b[i].first.size()-1) cout << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
