#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAXN 100000
#define INF 0x7f7f7f7f
using namespace std;
int a[MAXN];
int dp[MAXN];
int dpos[MAXN];
int pre[MAXN];
void Traversal(int val)
{
    if(val==0) return ;
    Traversal(pre[val]);
    printf("%d\n",a[val]);
}
int main()
{
    int N=1;
    while(scanf("%d",&a[N])!=EOF) N++;
    memset(dp,INF,sizeof(dp));
    dp[0]=-INF;
    int mx=0,ans=0;
    for(int i=1; i<N; ++i)
    {
        int p=lower_bound(dp,dp+N,a[i])-dp;
        dp[p]=a[i];
        dpos[p]=i;
        pre[i]=dpos[p-1];
        if(p>mx)
        {
            mx=p;
            ans=i;
        }
    }
    printf("%d\n",mx);
    printf("-\n");
    Traversal(ans);
    return 0;
}
