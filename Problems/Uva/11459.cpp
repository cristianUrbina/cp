//https://onlinejudge.org/external/114/11459.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> positions(a,1);
    unordered_map<int,int>sl;
    while(b--){
      int begin,end;
      cin>>begin>>end;
      sl[begin] = end;
    }
    bool win = false;
    for(int i = 0; i<c;++i){
      int dice;
      cin>>dice;
      if(!win){
        int player = i%a;
        positions[player]+=dice;
        auto it = sl.find(positions[player]);
        if(it!=sl.end()){
          positions[player]=it->second;
        }
        if(positions[player]>100)positions[player]=100;
        if(positions[player]==100) win = true;
      }
    }
    for(int i = 0; i<positions.size();++i){
      cout << "Position of player " << i+1<<" is "<<positions[i]<<".\n";
    }
  }
  return 0;
}
