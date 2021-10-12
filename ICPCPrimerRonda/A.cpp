//https://codeforces.com/gym/103274/problem/A
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
#define vpi vector<pair<int,int>>
#define INF 0x7f7f7f7f
using namespace std;

int memo [1000001];

int dp(int kgs, const vpi & bags){
  if(kgs == 0) return 0;
  if(memo[kgs]!=INF) return memo[kgs];
  int tmp = INF;
  for(auto a:bags){
    if(kgs <= a.first) tmp = min(tmp,a.second);
    else{
      tmp = min(tmp,dp(kgs-a.first, bags) + a.second);
    }
  }
  memo[kgs] = tmp;
  return tmp;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);	cout.tie(0);
  cout.setf(ios::fixed);
  cout.precision(10);
  double area=0;
  int n,b;
  cin>>b>>n;
  vpi bags(b);
  for(int i = 0; i < b; ++i){
    int w,p;
    cin>>w>>p;
    bags[i] = make_pair(w,p);
  }
  double printThis = 0;
  for(int i = 0; i < n ; ++i){
    double a,b,c;
    cin >> a >> b >> c;
    double p = (a+b+c)/2;
    printThis = sqrt(p)*sqrt(p-a)*sqrt(p-b)*sqrt(p-c);
    area += sqrt(p)*sqrt(p-a)*sqrt(p-b)*sqrt(p-c);
  }
  int kgs = ceil(area/double(30));
  memset(memo, INF, sizeof memo);
  for (auto i = bags.begin(); i<bags.end() && bags.size();) {
    if((*i).first == 0) bags.erase(i);
    else ++i;
  }
  if(bags.size() == 0) cout << -1 << "\n";
  else{
    int ans = 0;
    if(kgs >= 25){
      int index = 0;
      double kgPrice = INF;
      for(int i = 0; i < bags.size() ;++i){
        double tmp = double(bags[i].second)/double(bags[i].first);
        if(tmp < kgPrice) {
          index = i;
          kgPrice = tmp;
        }
      }
      while(kgs >= 25){
        ans+=bags[index].second*(kgs/bags[index].first);
        kgs %= bags[index].first;
      }
    }
    cout << ans + dp(kgs, bags) << "\n";
  }
  return 0;
}
