//https://onlinejudge.org/external/117/11786.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  string world;
  while(t--){
    stack<int> pos;
    cin>>world;
    int water = 0;
    for(int i = 0; i<world.size();++i){
      if(world[i]=='\\'){
        pos.push(i);
      }
      else if(world[i]=='/'&&!pos.empty()){
        water+=i-pos.top();
        pos.pop();
      }
      else{}
    }
    cout << water << endl;
  }
  return 0;
}
