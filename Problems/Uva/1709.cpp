//https://onlinejudge.org/external/117/11786.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int p,a,b,c,d,n;
  while(scanf("%d %d %d %d %d %d",&p,&a,&b,&c,&d,&n)!=EOF){
    double prices[n];
    for(int i = 1; i<=n;i++){
      prices[i-1]=p*(sin(a*i+b)+cos(c*i+d)+2);
    }
    double best=0,result=0;
    for(int i = 0; i<n;++i){
      if(prices[i]>best){
        best = prices[i];
      }
      if(result<best-prices[i]) result = best-prices[i];
    }
    printf("%.10f\n",result);
  }
  return 0;
}
