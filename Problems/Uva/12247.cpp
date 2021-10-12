//https://onlinejudge.org/external/122/12247.pdf
#include<bits/stdc++.h>
using namespace std;
int cmp(int a,const vector<int> &princess){
  int result = 0;
  for(int i =0;i<pricess.size();++i){
    if(princess[i]<a) result++;
  }
  return result;
}
int main(){
  while(cin>>princess[0]&&princess[0]!=0){
    vector<int> princess(3);
    vector<int> prince(2);
    vector<int> tests(2);
    for(int i = 1; i<princess.size();++i){
      cin>>princess[i];
    }
    for(int i = 0;i<prince.size();++i){
      cin>>prince[i];
      test[i] = cmp(prince[i],princess);
    }

  }
  return 0;
}
