#include<bits/stdc++.h>
using namespace std;
int main(){
  int r,l;
  cin>>l>>r;
  if(!l&&!r) cout << "Not a moose" << endl;
  else if(l==r) cout << "Even "<< r+l<<endl;
  else cout << "Odd " << max(r,l)*2<<endl;
  return 0;
}
