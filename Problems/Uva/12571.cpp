// https://onlinejudge.org/external/125/12571.pdf
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
  int t;
  cin>>t;
  while(t--){
    int n,q;
    cin>>n>>q;
    unordered_set<int> x;
    for(int i = 0;i<n;++i){
      int tmp;
      cin>>tmp;
      tmp = tmp&((1<<8)-1);
      x.insert(tmp);
    }
    for(int i = 0; i<q;++i){
      int a;
      int maxV = 0;
      cin>>a;
      for(int xi:x){
        maxV = max(maxV,xi&a);
      }
      cout << maxV << endl;
    }
  }
  return 0;
}
