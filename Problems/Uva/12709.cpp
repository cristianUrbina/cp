// https://onlinejudge.org/external/127/12709.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int t;
  while(cin>>t&&t>0){
    vector<pair<float,int>>a(t);
    for(int i = 0; i<t;++i){
      int l,w,h,vol;
      float acc;
      cin>>l>>w>>h;
      acc = 9.81-(9.81/(2*h));
      vol = l*w*h;
      a[i] = make_pair(acc,vol);
    }
    sort(a.begin(),a.end());
    cout << a.back().second << "\n";
  }
  return 0;
}
