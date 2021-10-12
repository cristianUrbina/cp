//https://onlinejudge.org/external/102/10258.pdf
#include<bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define vs vector <string>
using namespace std;
bool cmp(tuple<int,int,int> &a,tuple<int,int,int> &b){
  if(get<0>(a)==get<0>(b)){
    if(get<1>(a)==get<1>(b)){
      get<2>(a)>get<2>(b);
    }
    else return get<1>(a)<get<1>(b);
  }
  return get<0>(a)>get<0>(b);
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int n;
  cin>>n;
  string buffer;
  getline(cin,buffer);
  getline(cin,buffer);
  while(n--){
    vector<tuple<int,int,int>> table(101,make_tuple(0,0,0));
    vector<vector<bool>> solved(101,vb(10,false));
    vvi penalties (101,vi(10,0));
    int c,p,t;
    char l;
    while(getline(cin,buffer)&&buffer.length()){
      sscanf(buffer.c_str(),"%d %d %d %c",&c,&p,&t,&l);
      if(l=='C'&&!solved[c][p]){
        table[c] = make_tuple(get<0>(table[c])+1,get<1>(table[c])+t+penalties[c][p],c);
        solved[c][p] = true;
      }
      else if(l=='I'){
        table[c] = make_tuple(get<0>(table[c]),get<1>(table[c]),c);
        penalties[c][p]+=20;
      }
      else{
        table[c] = make_tuple(get<0>(table[c]),get<1>(table[c]),c);
      }
    }
    sort(table.begin(),table.end(),cmp);
    for(auto x:table){
      if(get<2>(x)!=0)cout << get<2>(x) << " " << get<0>(x) << " " << get<1>(x) <<"\n";
    }
    if(n)cout << "\n";
  }
  return 0;
}
