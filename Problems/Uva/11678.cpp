//https://onlinejudge.org/external/116/11678.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  while(scanf("%d %d",&a,&b)&&a!=0){
    vector<bool>aliceCards(1e5,false);
    vector<bool>bettyCards(1e5,false);
    int card,gA=0,gB=0,cardsA=0,cardsB=0;
    while(a--){
      scanf("%d",&card);
      aliceCards[card-1]=true;
      gA=max(gA,card);
    }
    while(b--){
      scanf("%d",&card);
      bettyCards[card-1]=true;
      gB=max(gB,card);
    }
    for(int i = 0;i<gA;++i){
      if(aliceCards[i]&&!bettyCards[i])cardsA++;
    }
    for(int i = 0;i<gB;++i){
      if(bettyCards[i]&&!aliceCards[i])cardsB++;
    }
    printf("%d\n",min(cardsA,cardsB));
  }
  return 0;
}
