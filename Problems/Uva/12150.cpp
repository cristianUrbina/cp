// https://onlinejudge.org/external/121/12150.pdf
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
  int n;
  while(cin>>n&&n){
    vll positions(n,0);
    bool flag = true;
    for(int i = 0;i<n;++i){
      int tmp,carN;
      cin>>carN>>tmp;
      if(i+tmp<0||i+tmp>=n||positions[i+tmp]){
        flag = false;
      }
      else positions[i+tmp] = carN;
    }
    if(flag){
      for(int i = 0;i<n;++i){
        cout << positions[i];
        if(i<n-1)cout << " ";
      }
    }
    else cout << -1;
    cout << "\n";
  }
  return 0;
}
