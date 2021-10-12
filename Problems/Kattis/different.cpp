#include<bits/stdc++.h>
using namespace std;
int main(){
  unsigned long long n,m;
  while(scanf("%lli %lli",&n,&m)!=EOF){
    unsigned long long subs = n>m?n-m:m-n;
    printf("%lli\n",subs);
  }
  return 0;
}
