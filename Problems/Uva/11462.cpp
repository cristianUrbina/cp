//https://onlinejudge.org/external/114/11462.pdf
#include<bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long>
#define vvl vector<vector<long>>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define vs vector <string>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int n;
  while(scanf("%d",&n)&&n){
    int a[n];
    for(int i = 0; i<n;++i){
      scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(int i = 0; i<n;++i){
      printf("%d",a[i]);
      if(i<n-1) printf(" ");
    }
    printf("\n");
  }
  return 0;
}
