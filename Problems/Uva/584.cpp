//https://onlinejudge.org/external/5/584.pdf
#include<bits/stdc++.h>
using namespace std;
int points(int i,vector<char>&rolls){
  int result;
  if(rolls[i]=='X'){
    result = 10;
  }
  else if(rolls[i]=='/'){
    result = 10-(rolls[i-1]-'0');
  }
  else {
    result = rolls[i]-'0';
  }
  return result;
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  string game;
  while(getline(cin,game)&&game!="Game Over"){
    vector<char> rolls((game.size()+1)/2);
    for(int i = 0;i<game.size();i+=2){
      rolls[i/2]=game[i];
    }
    int score=0,frame=1,roll = 0;
    for(int i = 0;i<rolls.size();++i){
      if(rolls[i]=='X'){
        if(frame<10){
          score+=+10+points(i+1,rolls)+points(i+2,rolls);
        }
        else score+=10;
        frame++;
        roll=0;
      }
      else if(rolls[i]=='/'){
        if(frame<10){
          score+=points(i,rolls)+points(i+1,rolls);
        }
        else score+=points(i,rolls);
        frame++;
        roll=0;
      }
      else {
        score+=rolls[i]-'0';
        roll++;
      }
      if(roll==2){
        frame++;
        roll=0;
      }
      // printf("%c: %d\n",rolls[i],score);
    }
    printf("%d\n",score);
  }
  return 0;
}

// 1 0 1 / 2 2 X 3 3 X 1 / 3 / X 1 2

// 1 1 2 13 15 17 33 36 39 59 60
