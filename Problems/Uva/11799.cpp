#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,t,auxV,nCase=1;
  cin>>t;
  while(t--){
    cin>>n;
    int maxV=1;
    while(n--){
      cin>>auxV;
      maxV=max(maxV,auxV);
    }
    printf("Case %d: %d\n",nCase++,maxV);
  }
  return 0;
}
