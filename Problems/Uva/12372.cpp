#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  int cnt = 1;
  while(cnt<=t){
    long long l,w,h;
    cin>>l>>w>>h;
    cout << "Case "<<cnt++<<": ";
    if(l>20||w>20||h>20) cout<<"bad"<<endl;
    else cout<<"good"<<endl;
  }

  return 0;
}
