//https://onlinejudge.org/external/125/12545.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,caseNo = 0;
  cin>>t;
  while(t--){
    int s1=0,s0=0,t1=0,t0=0,steps =0;
    string s,t;
    cin>>s>>t;
    for(int i = 0; i<s.length();++i){
      if(s[i]=='1') s1++;
      else if(s[i]=='0')s0++;
      else{}
    }
    for(int i = 0; i<t.length();++i){
      if(t[i]=='1') t1++;
      else if(t[i]=='0')t0++;
      else{}
    }
    if(s1>t1||s.length()!=t.length()) cout << "Case "<<++caseNo<<": "<<"-1"<<endl;
    else{
      for(int i = 0; i<s.length();++i){
        if(s[i]=='?'){
          if(t[i]=='0'&&t0>s0){
            s[i]='0';
            s0++;
          }
          else if(t[i]=='1'&&t1>s1){
            s[i]='1';
            s1++;
          }
          else{
            if(t0>s0){
              s[i]='0';
              s0++;
            }
            else {
              s[i]='1';
              s1++;
            }
          }
          steps++;
        }
      }
      int swaped=0;
      for(int i = 0; i<s.length();++i){
        if(s[i]=='0'&&t[i]=='1'&&s1<t1){
          steps++;
          s1++;
        }
        else if(s[i]=='0'&&t[i]=='1'){
          swaped++;
        }
        else if(s[i]=='1'&&t[i]=='0'){
          swaped++;
        }
        else{}
      }
      steps+=swaped/2;
      cout << "Case "<<++caseNo<<": "<< steps << endl;
    }
  }
  return 0;
}
