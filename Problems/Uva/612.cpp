//https://onlinejudge.org/external/6/612.pdf
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

// [a_1,a_2,...,a_i,...,a_j,...,a_n]
// i<j
// a_i > a_j

int inversions(const string &a){
  int result=0;
  for(int i = 0; i<a.size();++i){
    for(int j = i+1;j<a.size();++j){
      if(a[i]>a[j]) result++;
    }
  }
  return result;
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int M;
  cin>>M;
  while(M--){
    int n,m;
    cin>>n>>m;
    vector<tuple<int,int,string>> a(m);
    for(int i = 0; i<m;++i){
      string dna;
      cin>>dna;
      a[i] = make_tuple(inversions(dna),i,dna);
    }
    sort(a.begin(),a.end());
    for(auto x:a){
      cout << get<2>(x) << endl;
    }
    if(M) cout << "\n";
  }
  return 0;
}
