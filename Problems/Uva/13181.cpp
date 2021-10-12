// https://onlinejudge.org/external/131/13181.pdf
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
  string beds;
  while(cin>>beds){
    int mRow = -1,maxRow=0;
    bool begin = true;
    for(int i = 0; i<beds.size();++i){
      if(beds[i]=='.') mRow++;
      else{
        mRow = -1;
        begin = false;
      }
      if(!begin)maxRow = max((mRow)/2,maxRow);
      else{
        maxRow = max(mRow,maxRow);
      }
    }
    maxRow = max(maxRow,mRow);
    cout << maxRow<<endl;
  }
  return 0;
}
