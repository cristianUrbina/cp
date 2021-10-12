//https://onlinejudge.org/external/113/11332.pdf
#include<bits/stdc++.h>
using namespace std;
long long g(long long n){
  string sN = to_string(n);
  long long sum = 0;
  for(char c: sN){
    sum+=c-'0';
  }
  return (to_string(sum).length()==1) ? sum : g(sum);
}
int main(){
  long long n;
  while(scanf("%lli",&n)&&n>0){
    printf("%lli\n",g(n));
  }
  return 0;
}
