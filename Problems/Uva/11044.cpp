#include<bits/stdc++.h>
using namespace std;
int main(){
  int m,n,t;
  cin>>t;
  while(t--){
    cin>>m>>n;
    int beams = ceil(float(m-2)/3.0)*ceil(float(n-2)/3.0);
    cout<<beams<<endl;
  }
  return 0;
}
