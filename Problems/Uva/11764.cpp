#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,nCase=0;
  scanf("%d",&t);
  while(t--){
    cin>>n;
    int lowJ = 0,highJ = 0, high,lastHigh=-1;
    while(n--){
      cin>>high;
      if(lastHigh>-1){
        if(high>lastHigh) highJ++;
        else if(high<lastHigh) lowJ++;
      }
      lastHigh = high;
    }
    printf("Case %d: %d %d\n",++nCase,highJ,lowJ);
  }
  return 0;
}
