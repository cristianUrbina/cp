//https://onlinejudge.org/external/101/10170.pdf
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
  long long s,d;
  while(cin>>s>>d){
    long long day=s;
    while(day<d){
      day+=++s;
    }
    cout << s << endl;
  }
  return 0;
}
