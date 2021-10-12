//https://onlinejudge.org/external/127/12720.pdf
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
#define MOD 1000000007
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int t,caseN = 0;
  cin>>t;
  while(t--){
    string a;
    int s=0,tmp;
    cin>>a;
    int l,r;
    if(a.size()%2==1){
      l = (a.size()-1)/2;
      r = l;
    }
    else{
      l = (a.size()-1)/2;
      r = l+1;
    }
    while(l>=0&&r<a.size()){
      if((l+1+a.size()-r)%2==1||l==r){
        if(l+1>=a.size()-r){
          tmp=a[l];
          if(l==r){
            l--;
            r++;
          }
          else l--;
        }
        else{
          tmp=a[r];
          if(l==r){
            l--;
            r++;
          }
          else r++;
        }
      }
      else{
        if(a[r]>a[l]){
          tmp=a[r];
          r++;
        }
        else{
          tmp=a[l];
          l--;
        }
      }
      s=s<<1;
      s+=tmp-'0';
      if(s>=MOD) s%=MOD;
    }
    if(l>=0&&r>=a.size()) {
      s=s<<1;
      s+=a[l]-'0';
    }
    if(r<a.size()&&l<0){
      s=s<<1;
      s+=a[r]-'0';
    }
    if(s>=MOD) s%=MOD;
    cout << "Case #"<< ++caseN << ": " << s << endl;
  }
  return 0;
}
