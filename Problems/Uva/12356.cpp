//https://onlinejudge.org/external/123/12356.pdf
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
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int s,b;
  while(cin>>s>>b&&s){
    vector<pair<int,int>> line(s+1);
    for(int i = 1;i<s+1;++i){
      line[i] = make_pair(i-1,i+1);
    }
    while(b--){
      int l,r,pl=0,pr=0;
      cin>>l>>r;
      if(line[l].first>0) {
        line[line[l].first].second = line[r].second;
        pl = line[l].first;
      }
      if(line[r].second<s+1) {
        line[line[r].second].first = line[l].first;
        pr = line[r].second;
      }
      if(pl>0&&pl<s+1) cout << pl;
      else cout <<"*";
      cout << " ";
      if(pr>0&&pr<s+1) cout << pr;
      else cout<<"*";
      cout<<"\n";
    }
    cout<<"-\n";
  }
  return 0;
}
