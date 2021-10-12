//link
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
  freopen("i.txt", "r", stdin);
  freopen("o.txt", "w", stdout);
  int n;
  cin>>n;
  int a[n+1][n+1],max_sum=-(1e9),rect_sum=0;
  for(int i = 0; i<n;++i){
    for(int j = 0; j<n;++j){
      // cout << " i" << i << "j" << j<< endl;
      cin>>a[i][j];
      rect_sum+=a[i][j];
    }
  }
  max_sum = rect_sum;
  int ic = 0, iF = 0, fc = n-1, ff = n-1;
  while(ic!=fc&&iF!=ff){
    // cout <<"inicio ic "<< ic<<" fc" << fc << " if " << iF << " ff "<< ff << endl;
    long long sumIc, sumIf, sumFc, sumFf,min_sum=1e9;
    sumIc= sumIf= sumFc= sumFf = 0;
    for(int i = iF;i<=ff;++i){
      sumIc+=a[i][ic];
    }
    min_sum=min(min_sum,sumIc);
    for(int i = iF;i<=ff;++i){
      sumFc+=a[i][fc];
    }
    min_sum=min(min_sum,sumFc);
    for(int i = ic;i<=fc;++i){
      sumIf+=a[iF][i];
    }
    min_sum=min(min_sum,sumIf);
    for(int i = ic;i<=fc;++i){
      sumFf+=a[ff][i];
    }
    min_sum=min(min_sum,sumFf);
    if(min_sum == sumIc){
      ic++;
    }
    else if(min_sum == sumFc){
      fc--;
    }
    else if( min_sum == sumIf){
      iF++;
    }
    else {
      ff--;
    }
    rect_sum -= min_sum;
    max_sum = max(max_sum,rect_sum);
    // cout << "sums " << endl;
    // cout << sumIc << " " << sumFc << " " << sumIf << " " << sumFf << endl;
    // cout <<"final ic "<< ic<<" fc" << fc << " if " << iF << " ff "<< ff << endl;
  }
  cout << max_sum << "\n";
  return 0;
}
