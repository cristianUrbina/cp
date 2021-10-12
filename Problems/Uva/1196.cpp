//https://onlinejudge.org/external/11/1196.pdf
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
#define INF 0x7f7f7f7f
using namespace std;

bool cmp(const pair<int,int> &a, const pair<int,int> &b){
  if(a.second == b.second){
    return a.first < b.first;
  }
  else return a.second < b.second;
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int n;
  while(cin>>n,n){
    vector<pair<int,int>> blocks(n);
    for(int i = 0; i<n;++i){
      int x,y;
      cin>>x>>y;
      blocks[i] = make_pair(x,y);
    }
    sort(blocks.begin(),blocks.end());
    vector<pair<int,int>> blocks2 = blocks;
    sort(blocks2.begin(),blocks2.end(),cmp);
    int cnt = 1;
    pair<int,int> current = blocks[0];
    for(int i = 1; i<n;++i){
      if(blocks[i].first >= current.first && blocks[i].second >= current.second){
        current = blocks[i];
        cnt++;
      }
    }
    int cnt2 = 1;
    current = blocks2[0];
    for(int i = 1; i<n;++i){
      if(blocks2[i].first >= current.first && blocks2[i].second >= current.second){
        current = blocks2[i];
        cnt2++;
      }
    }
    cout << (cnt<cnt2?cnt2:cnt) << "\n";
  }
  cout << "*" << "\n";
  return 0;
}
