// https://onlinejudge.org/external/113/11321.pdf#include<bits/stdc++.h>
#include<bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vs vector <string>
using namespace std;

bool cmp(pair<int,int> &a, pair<int,int> &b){
  if(a.second==b.second){
    if(a.first%2==0&&b.first%2==1){
      return false;
    }
    else if(a.first%2==0&&b.first%2==-1){
      return false;
    }
    else if(a.first%2==1&&b.first%2==0){
      return true;
    }
    else if(a.first%2==-1&&b.first%2==0){
      return true;
    }
    else if(a.first%2==1&&b.first%2==1){
      return a.first>b.first;
    }
    else if(a.first%2==-1&&b.first%2==1){
      return a.first>b.first;
    }
    else if(a.first%2==1&&b.first%2==-1){
      return a.first>b.first;
    }
    else if(a.first%2==-1&&b.first%2==-1){
      return a.first>b.first;
    }
    else{
      return a.first<b.first;
    }
  }
  else return a.second<b.second;
}

int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int n,m;
  while(cin>>n>>m&&n){
    vector<pair<int,int>> a(n);
    for(int i = 0; i<n;++i){
      cin>>a[i].first;
      a[i].second = a[i].first % m;
    }
    cout << n << " " << m << "\n";
    sort(a.begin(),a.end(),cmp);
    for(auto x:a){
      cout << x.first <<"\n" ;
    }
  }
  cout << "0 0\n";
  return 0;
}
