//https://onlinejudge.org/external/105/10528.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  vector<string> notes ={"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};
  string s;
  while(getline(cin,s)&&s!="END"){
    string buffer="";
    for(int i = 0; i<notes.size();++i){
      unordered_set<string>majorScale;
      bool flag = true;
      int cnt = 0,index=i;
      while(cnt <=6){
        majorScale.insert(notes[index]);
        if(cnt==2||cnt==6) index++;
        else index+=2;
        if(index>=notes.size())index%=notes.size();
        flag = false;
        cnt++;
      }
      flag = true;
      for(int i = 0; i<s.size()&&flag;++i){
        string note="";
        while(s[i]!=' '&&i<s.size()){
          note+=s[i++];
        }
        auto it = majorScale.find(note);
        if(it==majorScale.end())flag=false;
      }
      if(flag)buffer+=notes[i]+" ";
    }
    if(buffer.size())buffer.pop_back();
    cout <<buffer<< "\n";
  }
  return 0;
}
