// https://onlinejudge.org/external/100/10038.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int n;
  while(scanf("%d",&n)!=EOF){
    bool diffs[n];
    for(int i = 0; i<n;++i){
      diffs[i]=false;
    }
    bool flag = true;
    int lastNum = 3001,num;
    for(int i = 0; i<n;++i){
      scanf("%d",&num);
      if(lastNum!=3001){
        int diff;
        diff = abs(num-lastNum);
        if(diff<n&&diffs[diff]){
          flag = false;
        }
        if(diff>=n) flag = false;
        else diffs[diff] = true;
      }
      lastNum = num;
    }
    // for(int i = 0; i<n&&flag;++i){
    //   if(!diffs[i])flag=false;
    // }
    if(flag) printf("Jolly\n");
    else printf("Not jolly\n");
  }
  return 0;
}
