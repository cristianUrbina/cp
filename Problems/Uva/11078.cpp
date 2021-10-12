#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int best = -1e9,result= -1e9,aux;
    while(n--){
      cin>>aux;
      if(result < best-aux) result = best-aux;
      if(aux>best) best = aux;
    }
    cout<<result<<endl;
  }
  return 0;
}
