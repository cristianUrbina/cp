#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,n;
  cin>>x>>n;
  int a=0,p;
  while(n--){
    cin>>p;
    a += x-p;
  }
  cout<<x+a<<endl;
  return 0;
}
