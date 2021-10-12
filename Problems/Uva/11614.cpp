#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t,n;
  scanf("%lli",&t);
  while(t--){
    scanf("%lli",&n);
    long long determinant, root;
    determinant = 1-4*(-2*n);
    root = (-1+sqrt(determinant))/2;
    printf("%lli\n",root);
  }
  return 0;
}
