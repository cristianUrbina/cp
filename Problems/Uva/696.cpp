//https://onlinejudge.org/external/6/696.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int m,n;
  while(scanf("%d %d",&n,&m)&&(n!=0||m!=0)){
    int knights;
    if(n==0||m==0){
      knights = 0;
    }
    else if(n==1||m==1){
      knights = max(n,m);
    }
    else if(n==2&&m==2||n==2&&m==3||n==3&&m==2){
      knights = 4;
    }
    else if(n==2){
      if(m%2==0){
        if(m%4!=0){
          knights=m+2;
        }
        else knights = m;
      }
      else knights=m+1;
    }
    else if(m==2){
      if(n%2==0){
        if(n%4!=0){
          knights=n+2;
        }
        else knights = n;
      }
      else knights=n+1;
    }
    else if(n%2==0){
      knights = n/2*m;
    }
    else{
      if(m%2==0){
        knights = m/2*n;
      }
      else{
        knights = (((n+1)/2)*((m+1)/2)+(n/2)*(m/2));
      }
    }
    printf("%d knights may be placed on a %d row %d column board.\n",knights,n,m);
  }
  return 0;
}
