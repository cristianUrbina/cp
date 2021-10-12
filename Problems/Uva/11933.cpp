//https://onlinejudge.org/external/119/11933.pdf
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
  int n;
  while(cin>>n&&n){
    vector<int> arr;
    arr.reserve(32);
    for(int i =0;n>=1;++i){
      if(n%2==1) arr.push_back(i);
      n/=2;
    }
    int a = 0,b=0;
    for(int i = 0; i<arr.size();++i){
      if(i%2==0) a|=(1<<arr[i]);
      else b|=(1<<arr[i]);
    }
    cout << a << " " << b <<"\n";
  }
  return 0;
}
