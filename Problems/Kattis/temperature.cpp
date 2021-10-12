#include<bits/stdc++.h>
using namespace std;
int main(){
  double x,y;
  cin >>x>>y;
  if(x==0&&y==1) cout << "ALL GOOD" <<endl;
  else if(y==1)  cout << "IMPOSSIBLE" << endl;
  else printf("%.6f\n",x/(1.0-y));
  return 0;
}
