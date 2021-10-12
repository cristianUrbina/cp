//https://onlinejudge.org/external/9/947.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int n;
  scanf("%d",&n);
  while(n--){
    char code[6],test[6];
    int A,B,result = 0;
    scanf("%s %d %d",code,&A,&B);
    int len = strlen(code);
    int limit = 1;
    for(int i = 0; i<len;++i){
      limit*=10;
    }
    for(int i=limit /10;i<limit;++i){
      sprintf(test,"%d",i);
      int cnt[10]={},ta=0,tb=0,err=0;
      for(int i=0;i<len;++i){
        cnt[test[i]-'0']++;
        if(test[i]=='0') err=1;
      }
      if(err) continue;
      for(int i=0;i<len&&ta<=A;++i){
        if(code[i]==test[i]) {
          ta++;
          cnt[test[i]-'0']--;
        }
      }
      if(ta!=A)continue;
      for(int i = 0; i<len&&tb<=B;++i){
        if(code[i]!=test[i]&&cnt[code[i]-'0']){
          tb++;
          cnt[code[i]-'0']--;
        }
      }
      if(tb!=B)continue;
      result++;
    }
    printf("%d\n",result);
  }
  return 0;
}
