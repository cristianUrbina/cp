//https://onlinejudge.org/external/5/514.pdf
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
  int n;
  while(cin>>n,n){
    int tmp;
    queue<int> b;
    stack<int> station;
    while (cin>>tmp,tmp){
      b.push(tmp);
      if(b.size()==n){
        bool flag = 1;
        int i=1;
        while(b.size()&&flag){
          if(station.size()&&station.top()>b.front()){
            flag = false;
            break;
          }
          else if(!station.size()||station.top()<b.front())for(;i<=b.front();++i) station.push(i);
          station.pop(),b.pop();
        }
        if(flag) cout << "Yes\n";
        else cout << "No\n";
        while(b.size()) b.pop();
        while(station.size()) station.pop();
      }
    }
    cout << "\n";
  }
  return 0;
}
