//https://onlinejudge.org/external/108/10812.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  long long t;
  cin>>t;
  while(t--){
    long long sum,diff;
    cin>>sum>>diff;
    long long x,y;
    bool imp = false;
    if((sum+diff)%2!=0||sum<diff) imp = true;
    x = (sum+diff)/2;
    y = (sum - x)>=0?sum-x:x-sum;
    if(y<0) imp = true;
    if(imp) cout << "impossible"<<endl;
    else cout << max(x,y) << " "<< min(x,y)<<endl;
  }
  return 0;
}
