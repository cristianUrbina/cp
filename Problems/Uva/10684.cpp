//https://onlinejudge.org/external/106/10684.pdf
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
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  long long a[10001];
  int n;
  while(cin>>n&&n){
    long long result = -(1e9), max_sum = 0;
    while(n--){
      long long tmp;
      cin>>tmp;
      max_sum = max(tmp,max_sum+tmp);
      result = max(result,max_sum);
    }
    if(result>0) cout << "The maximum winning streak is "<<result << ".\n";
    else cout << "Losing streak." << "\n";
  }
  return 0;
}
