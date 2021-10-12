//https://onlinejudge.org/external/125/12503.pdf
#include<bits/stdc++.h>
using namespace std;
vector<string>insts(100);
void doInst(string inst, int &pos){
  if (inst == "RIGHT") pos++;
  else if (inst == "LEFT") pos--;
  else{
    for(int i = 0; i<inst.length();++i){
      if(inst[i]>='0'&&inst[i]<='9'){
        int num;
        num = stoi(inst.substr(i,inst.length()-i));
        doInst(insts[num-1],pos);
        break;
      }
    }
  }
}

int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int pos = 0;
    getline(cin,insts[0]);
    for(int i = 0; i<n;++i){
      getline(cin,insts[i]);
      doInst(insts[i],pos);
    }
    cout << pos << endl;
  }
  return 0;
}
