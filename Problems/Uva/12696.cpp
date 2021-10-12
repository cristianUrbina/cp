//https://onlinejudge.org/external/126/12696.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, sum=0;
  float l,w,d,we;
  cin >>t;
  while(t--){
    cin>>l>>w>>d>>we;
    if((l+w+d<=125.0||(l<=56.0&&w<=45.0&&d<=25.0))&&we<=7.0){
      cout << 1 << endl;
      sum++;
    }
    else cout << 0 << endl;
  }
  cout << sum << endl;
  return 0;
}
