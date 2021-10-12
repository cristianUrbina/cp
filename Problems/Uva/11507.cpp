//https://onlinejudge.org/external/115/11507.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int l;
  while(scanf("%d",&l)&&l!=0){
    string direction = "+x";
    char bend[3];
    int x=1,y=0,z=0,xMem;
    l--;
    while(l--){
      scanf("%s",bend);
      if(!strcmp(bend,"+y")&&direction!="+z"&&direction!="-z"){
        if(direction == "+x") direction = "+y";
        else if(direction == "-x") direction = "-y";
        else if(direction == "+y") direction = "-x";
        else direction = "+x";
      }
      else if(!strcmp(bend,"-y")&&direction!="+z"&&direction!="-z"){
        if(direction == "+x") direction = "-y";
        else if(direction == "-x") direction = "+y";
        else if(direction == "+y") direction = "+x";
        else direction = "-x";
      }
      else if(!strcmp(bend,"+z")&&direction!="+y"&&direction!="-y"){
        if(direction == "+x") direction = "+z";
        else if(direction == "-x") direction = "-z";
        else if(direction == "+z") direction = "-x";
        else direction = "+x";
      }
      else if(!strcmp(bend,"-z")&&direction!="+y"&&direction!="-y"){
        if(direction == "+x") direction = "-z";
        else if(direction == "-x") direction = "+z";
        else if(direction == "+z") direction = "+x";
        else direction = "-x";
      }
      else{}
    }
    printf("%s\n",direction.c_str());
  }
  return 0;
}
