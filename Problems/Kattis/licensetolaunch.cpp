#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin>>n;
  long long minJ=1e9,iMinJ=1e5;
  int cnt = 0;
  while(n--){
    int aux;
    cin>>aux;
    if(aux<minJ){
      minJ=aux;
      iMinJ = cnt;
    }
    cnt++;
  }
  printf("%d\n",iMinJ);
  return 0;
}
