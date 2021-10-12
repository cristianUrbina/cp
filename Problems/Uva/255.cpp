//https://onlinejudge.org/external/2/255.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int k,q,m;
  while(scanf("%d %d %d",&k,&q,&m)!=EOF){
    if(k==q){
      printf("Illegal state\n");
    }
    else{
      bool illegal=false;
      if(k==m||q==m){
        illegal = true;
      }
      else if(q%8==k%8&&q%8==m%8){
        if(k>q){
          if(m>k)illegal = true;
        }
        else{
          if(m<k)illegal = true;
        }
      }
      else if(k>=q-q%8&&k<=q+7-(q%8)&&m>=q-q%8&&m<=q+7-(q%8)){
        if(k>q){
          if(m>k)illegal = true;
        }
        else{
          if(m<k)illegal = true;
        }
      }
      else if(q%8!=m%8&&(m<q-q%8||m>q+7-(q%8))||m<0||m>63){
        illegal = true;
      }
      else{}
      if(illegal){
        printf("Illegal move\n");
      }
      else{
        vector<int> kingsMoves = {k-8,k-1,k+1,k+8};
        string edge = "";
        if(k%8==0){
          edge = "left" ;
          kingsMoves ={k-8,k+1,k+8};
        }
        else if(k%8==7){
          edge = "right";
          kingsMoves ={k-8,k-1,k+8};
        }
        bool flag = true;
        for(int x: kingsMoves){
          if(m==x) flag = false;
        }
        if(!flag){
          printf("Move not allowed\n");
        }
        else{
          q=m;
          bool cont = false;
          for(int x: kingsMoves){
            if(x>=0&&x<=63&&(q%8!=x%8&&!(x>=q-q%8&&x<=q+7-(q%8)))){
              cont = true;
            }
          }
          if(cont){
            printf("Continue\n");
          }
          else {printf("Stop\n");}
        }
      }
    }
  }
  return 0;
}
