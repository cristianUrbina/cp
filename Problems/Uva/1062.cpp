//https://onlinejudge.org/external/10/1062.pdf
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
  string s;
  int caseN = 0;
  while(cin>>s&&s!="end"){
    char tmp,hold;
    int res = 1,res2 = 1, l[27];
    for(int i = 0; i<27;++i) l[i] = 0;
    hold = s.back();
    l[hold-'A'] = 1;
    for(int i = s.size()-2;i>=0;--i){
      tmp = s[i];
      if(tmp<hold)++res;
      hold = tmp;
      if(!l[tmp-'A']){
        res2++;
        l[tmp-'A'] = 1;
      }
    }
    cout << "Case " << ++caseN << ": "<<((res<res2)?res:res2) << "\n";
  }

  return 0;
}
