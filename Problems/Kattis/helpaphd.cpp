#include<bits/stdc++.h>
#define INF 10000000
using namespace std;
int main(){
  int a,b,t;
  string line;
  scanf("%d",&t);
  getline(cin,line);
  while(t--){
    getline(cin,line);
    if(line=="P=NP") printf("skipped\n");
    else {
      sscanf(line.c_str(),"%d+%d",&a,&b);
      printf("%d\n",a+b);
    }
  }
  return 0;
}
