#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int aux=0,auxHolder=0,cnt=0;
    bool found = false;
    while(n--){
      cin>>aux;
      if(auxHolder&&!found&&aux-1!=auxHolder){
        printf("%d\n",cnt+1);
        found=true;
      }
      auxHolder = aux;
      cnt++;
    }
  }
  return 0;
}
