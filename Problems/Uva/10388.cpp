//https://onlinejudge.org/external/103/10388.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  //freopen("i.txt", "r", stdin);
  //freopen("o.txt", "w", stdout);
  string janePD,johnPD;
  int t;
  cin>>t;
  while(t--){
    cin>>janePD>>johnPD;
    reverse(janePD.begin(),janePD.end());
    reverse(johnPD.begin(),johnPD.end());
    string janePU="",johnPU="";
    int turn = 0,snap;
    while(turn<=1000&&(janePD.size()||janePU.size())&&(johnPD.size()||johnPU.size())){
      janePU+=janePD.back();//+janePU;
      janePD.pop_back();
      johnPU+=johnPD.back();//+johnPU;
      johnPD.pop_back();
      if(janePU.back()==johnPU.back()){
        snap = random()/141%2;
        if(!snap){
          janePU+=johnPU;
          johnPU="";
          reverse(janePU.begin(),janePU.end());
          cout<<"Snap! for Jane: "<<janePU<<endl;
          reverse(janePU.begin(),janePU.end());
        }
        else{
          johnPU+=janePU;
          janePU="";
          reverse(johnPU.begin(),johnPU.end());
          cout<<"Snap! for John: "<<johnPU<<endl;
          reverse(johnPU.begin(),johnPU.end());
        }
      }
      if(!janePD.size()){
        reverse(janePU.begin(),janePU.end());
        janePD=janePU;
        janePU="";
      }
      if(!johnPD.size()){
        reverse(johnPU.begin(),johnPU.end());
        johnPD=johnPU;
        johnPU="";
      }
      ++turn;
    }
    if(turn>1000){
      cout<<"Keeps going and going ..."<<endl;
    }
    else if(janePD.size()||janePU.size()){
      cout << "Jane wins."<<endl;
    }
    else cout<<"John wins."<<endl;
    if(t)cout<<endl;
  }

  return 0;
}
