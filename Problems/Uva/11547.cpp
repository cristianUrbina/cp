#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    n*=567;
    n/=9;
    n+= 7492;
    n*=235;
    n/=47;
    n-=498;
    int digit = (n%100)/10;
    if(digit<0) digit*=-1;
    cout<<digit<<"\n";
  }
  return 0;
}
