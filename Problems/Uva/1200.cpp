//https://onlinejudge.org/external/12/1200.pdf
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
#define INF 0x7f7f7f7f
using namespace std;

void calculateSide (const string & eqn, int& linear, int& xs) {
  int fac = 1;
  for (int i = 0; i < eqn.size(); ++i) {
    string num = "";
    bool isX = false;
    while (eqn[i]>='0' && eqn[i]<='9') {
      num += eqn[i++];
    }
    if (eqn[i] == 'x') {
      isX = true;
      ++i;
    }

    if (isX) {
      xs += (num!=""?stoi(num):1) * fac;
    }
    else {
      linear += stoi(num) * fac;
    }

    if (eqn[i] == '+'){
      fac = 1;
    }
    else {
      fac = -1;
    }
  }
}

int main(){
  int t;
  cin >> t;
  while (t--) {
    string eqn;
    cin >> eqn;
    int rLinear=0,lLinear=0,rXs=0,lXs=0;
    int eqPos = eqn.find_first_of("=");
    calculateSide(eqn.substr(0,eqPos),lLinear,lXs);
    calculateSide(eqn.substr(eqPos+1, eqn.size()-eqPos+1),rLinear,rXs);
    int totalXs = lXs-rXs;
    int totalLinear = rLinear - lLinear;
    if (totalXs == 0 && totalLinear == 0) {
      cout << "IDENTITY\n";
    }
    else if (totalXs == 0 && totalLinear != 0) {
      cout << "IMPOSSIBLE\n";
    }
    else {
      cout << (int) floor((double)totalLinear / (double)totalXs) << "\n";
    }
  }
  return 0;
}
