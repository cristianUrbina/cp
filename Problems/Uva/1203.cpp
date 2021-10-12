//https://onlinejudge.org/external/12/1203.pdf
#include <cstdio>
#include <queue>
#include <utility>
#include <cstring>
#include <iostream>
#include <functional>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  // char s[20];
  // int qnum,p,n;
  // priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
  char s[20];
	int qnum, p, n;
	priority_queue<pair<int, pair<int, int> >,
			vector<pair<int, pair<int, int> > >,
			greater<pair<int, pair<int, int> > > > pq;
  while(scanf("%s",s),strcmp("#",s)){
    scanf("%d %d",&qnum,&p);
    pq.push(pair<int,pair<int,int>>(p,pair<int,int>(qnum,p)));
  }
  scanf("%d",&n);
  while(n--){
    pair<int,pair<int,int>> temp = pq.top();
    pq.pop();
    printf("%d\n",temp.second.first);
    temp.first+=temp.second.second;
    pq.push(temp);
  }
  return 0;
}
