#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,nCase=1;
  while(scanf("%d",&n)!=EOF){
    int aux,minI= 1000000,maxI=-1000000;
    while(n--){
      cin>>aux;
      minI =  min(minI,aux);
      maxI = max(maxI,aux);
    }
    int rangeI =abs(maxI-minI);
    printf("Case %d: %d %d %d\n",nCase++,minI,maxI,rangeI);
  }
  return 0;
}
