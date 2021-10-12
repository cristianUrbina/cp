#include<bits/stdc++.h>
using namespace std;
int main(){
  int sweet, sour;
  while(scanf("%d %d",&sweet,&sour)&&!(sweet==0&&sour==0)){
    if(sour+sweet==13){
      printf("Never speak again.\n");
    }
    else if(sour>sweet){
      printf("Left beehind.\n");
    }
    else if(sour<sweet){
      printf("To the convention.\n");
    }
    else printf("Undecided.\n");
  }
  return 0;
}
