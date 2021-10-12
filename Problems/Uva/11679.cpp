//https://onlinejudge.org/external/116/11679.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int b,n;
  while(scanf("%d %d",&b,&n)&&b&&n){
    vector<int> r(b);
    for(int i = 0; i<b ; ++i){
      cin>>r[i];
    }
    while(n--){
      int debtor, creditor, debt;
      cin>>debtor>>creditor>>debt;
      r[creditor-1]+=debt;
      r[debtor-1]-=debt;
    }
    while(b--&&r[b]>=0){}
    if(b==-1)printf("S\n");
    else printf("N\n");
  }
  return 0;
}
