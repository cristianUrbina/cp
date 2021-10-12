//https://onlinejudge.org/external/125/12541.pdf
#include<bits/stdc++.h>
using namespace std;
bool cmp(const tuple<string,int,int,int> &a,const tuple<string,int,int,int> &b){
  if(get<3>(a)==get<3>(b)){
    if(get<2>(a)==get<2>(b)){
      return get<1>(a)<get<1>(b);
    }
    else return get<2>(a)<get<2>(b);
  }
  else return get<3>(a)<get<3>(b);
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int n;
  cin >>n;
  vector<tuple<string,int,int,int>> birthdates(n);
  string names[n];
  int i=0;
  while(n--){
    int day,month,year;
    string name;
    cin>>name>>day>>month>>year;
    birthdates[i++]=make_tuple(name,day,month,year);
  }
  sort(birthdates.begin(),birthdates.end(),cmp);
  cout << get<0>(birthdates.back())<<"\n"<<get<0>(birthdates.front())<<"\n";
  return 0;
}
