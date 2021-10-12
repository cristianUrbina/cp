//https://onlinejudge.org/external/116/11683.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,c;
  while(scanf("%d %d",&a,&c)&&a!=0){
    int last=a;
    int cuts = 0;
    for(int i = 0; i<c; ++i){
      int heigh;
      cin >> heigh;
      if(heigh < last) cuts+=last-heigh;
      last = heigh;
    }
    cout << cuts << endl;
  }
  return 0;
}
