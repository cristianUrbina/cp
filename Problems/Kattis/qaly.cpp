#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  float q,y,qaly;
  cin>>t;
  while(t--){
    scanf("%f %f",&q,&y);
    qaly += q*y;
  }
  printf("%f",qaly);
  return 0;
}
