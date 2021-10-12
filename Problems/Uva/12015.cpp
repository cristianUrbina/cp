//https://onlinejudge.org/external/120/12015.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<pair<string,int>> pages(10);
  int caseNo =0;
  int t;
  cin>>t;
  while(t--){
    int rank, best=0;
    string page;
    for(int i = 0;i<10;++i){
      cin>>page>>rank;
      pages[i]=make_pair(page,rank);
      if(rank>best) best = rank;
    }
    cout << "Case #" << ++caseNo << ":\n";
    for(int i = 0;i<10;++i){
      if(pages[i].second==best){
        cout << pages[i].first << "\n";
      }
    }
  }
  return 0;
}
