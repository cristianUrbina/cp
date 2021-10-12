//https://onlinejudge.org/external/114/11450.pdf
#include<bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long>
#define vvl vector<vector<long>>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define vs vector<string>
using namespace std;
const int MAX_M = 210;
const int MAX_C = 30;
int memo[MAX_C][MAX_M],prices[MAX_C][MAX_M],N,M,C;
int dp(int g, int b){
  if(b<0) return -1e9;
  if(g==C) return M-b;
  if(memo[g][b]!=-1) return memo[g][b];
  int ans = -1;
  for(int i = 1; i<= prices[g][0];++i){
    ans = max(ans,dp(g+1,b-prices[g][i]));
  }
  return memo[g][b] = ans;
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  scanf("%d",&N);
  while(N--){
    memset(memo,-1,sizeof memo);
    scanf("%d %d",&M,&C);
    for(int i = 0 ; i<C;++i){
      scanf("%d",&prices[i][0]);
      for(int j = 1; j<=prices[i][0];++j){
        scanf("%d",&prices[i][j]);
      }
    }
    if(dp(0,M)>=0) printf("%d",dp(0,M));
    else printf("no solution");
    printf("\n");
  }
  return 0;
}
