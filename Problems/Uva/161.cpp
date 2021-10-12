// https://onlinejudge.org/external/1/161.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  while(1){
    vector<int> cycles;
    int cycle;
    while(scanf("%d",&cycle)&&cycle!=0){
      cycles.push_back(cycle);
    }
    if(!cycles.size()&&!cycle){
      scanf("%d",&cycle);
      break;
    }
    bool flag = false;
    vector<string> states(cycles.size(),"green");
    int i;
    for(i = 1; i<=5*3600;++i){
      bool all = true;
      for(int j = 0; j<states.size();++j){
        if(states[j]=="green"&&(i+5)%cycles[j]==0) states[j]="orange";
        else if(states[j]=="orange"&&i%cycles[j]==0)states[j]="red";
        else if(states[j]=="red"&&i%cycles[j]==0)states[j]="green";
        else{}
        if(states[j]=="red"||states[j]=="orange") {
          flag = true;
          all = false;
        }
      }
      if(flag&&all){
        char time[100];
        int hour = i/3600,min = (i-hour*3600)/60,seg = i-hour*3600-min*60;
        sprintf(time,"%02d:%02d:%02d",hour,min,seg);
        printf("%s\n",time);
        break;
      }
    }
    if(i>5*3600) printf("Signals fail to synchronise in 5 hours\n");
  }
  return 0;
}
