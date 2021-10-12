//https://onlinejudge.org/external/117/11736.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int b,v;
  while(cin>>b>>v){
    vector<string> varNames(v);
    vector<int> varBytes(v);
    unordered_map<string,unsigned long long> variables;
    for(int i = 0; i<v;++i){
      cin>>varNames[i]>>varBytes[i];
    }
    for(int i = 0; i<v;++i){
      string number="";
      for(int j = 0; j<varBytes[i];++j){
        string aux;
        cin>>aux;
        number+=aux;
      }
      variables[varNames[i]]=stoull(number,nullptr,2);
    }
    int q;
    cin>>q;
    while(q--){
      string variable;
      cin>>variable;
      auto it = variables.find(variable);
      cout<<variable<<"=";
      if(it!=variables.end())cout<<it->second;
      cout<<"\n";
    }
    varNames.clear();
    varBytes.clear();
    variables.clear();
  }
  return 0;
}
