#include<bits/stdc++.h>
using namespace std;
int scoreCalculator(const int &a,const int &b){
  int score=0;
  if((a==1&&b==2)||(a==2&&b==1)) score = 1e9;
  else if(a==b) score = 100 +a*10+b;
  else{
    int maxI,minI;
    maxI = max(a,b);
    minI = min(a,b);
    score = maxI*10+minI;
  }
  return score;
}
int main(){
  int s0,s1,r0,r1;
  int score1,score2;
  while(scanf("%d %d %d %d",&s0,&s1,&r0,&r1)&&s0!=0){
    score1 = scoreCalculator(s0,s1);
    score2 = scoreCalculator(r0,r1);
    if(score1>score2){
      printf("Player 1 wins.\n");
    }
    else if (score2>score1){
      printf("Player 2 wins.\n");
    }
    else{
      printf("Tie.\n");
    }
  }

  return 0;
}
