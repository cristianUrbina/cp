#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,nCase=0;
  while(scanf("%d",&n)&&n>0){
    int reasons = 0, treats = 0;
    while(n--){
      int event;
      cin>>event;
      if(event==0) treats++;
      else reasons++;
    }
    printf("Case %d: %d\n",++nCase,reasons-treats);
  }
  return 0;
}
