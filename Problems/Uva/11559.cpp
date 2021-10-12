//https://onlinejudge.org/external/115/11559.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,b,h,w;
  while(scanf("%d %d %d %d",&n,&b,&h,&w)!=EOF){
    int best=1e9;
    while(h--){
      int cost,total=1e9,freeBeds;
      cin>>cost;
      for(int i = 0; i<w;++i){
        cin>>freeBeds;
        if(freeBeds>=n){
          total = cost * n;
        }
      }
      if(best>total) best = total;
    }
    if(best<=b) cout << best<<endl;
    else cout<<"stay home" << endl;
  }
  return 0;
}
