//https://onlinejudge.org/external/126/12662.pdf
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
  int n,q;
  cin>>n;
  string a[n];
  vector<int> pos;
  pos.reserve(101);
  for(int i = 0; i<n;++i){
    cin>>a[i];
    if(a[i]!="?") pos.push_back(i);
  }
  cin>>q;
  while(q--){
    int tmp;
    cin>>tmp;
    if(a[--tmp]=="?"){
      auto it = lower_bound(pos.begin(),pos.end(),tmp);
      auto itB = it-1;
      if(itB >= pos.begin()&&it!=pos.end()){
        if(*it-tmp==tmp-*itB){
          cout << "middle of "<< a[*itB] << " and " << a[*it] << "\n";
        }
        else if(*it-tmp<tmp-*itB){
          for(int i = 0;i<*it-tmp;++i){
            cout << "left of ";
          }
          cout << a[*it] << "\n";
        }
        else{
          for(int i = 0;i<tmp-*itB;++i){
            cout << "right of ";
          }
          cout << a[*itB] << "\n";
        }
      }
      else if(it != pos.end()){
        for(int i = 0;i<*it-tmp;++i){
          cout << "left of ";
        }
        cout << a[*it] << "\n";
      }
      else if(itB >= pos.begin()){
        for(int i = 0;i<tmp-*itB;++i){
          cout << "right of ";
        }
        cout << a[*itB] << "\n";
      }
      else{}
    }
    else cout << a[tmp] << "\n";
  }
  return 0;
}

// 3
