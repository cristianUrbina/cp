//https://onlinejudge.org/external/121/12157.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,caseNo=0;
  cin>>t;
  while(t--){
    cin>>n;
    pair<int,int> costs=make_pair(0,0);
    int duration;
    while(n--){
      cin>>duration;
      costs.first += ceil(float(duration+1)/30.0)*10;
      costs.second += ceil(float(duration+1)/60.0)*15;
    }
    cout<<"Case " << ++caseNo<<": ";
    if(costs.first < costs.second){
      cout<<"Mile "<< costs.first<<endl;
    }
    else if (costs.first > costs.second){
      cout<<"Juice "<< costs.second<<endl;
    }
    else cout<< "Mile Juice " << costs.first<<endl;
  }
  return 0;
}
