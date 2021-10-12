// https://onlinejudge.org/external/119/11997.pdf
#include <bits/stdc++.h>
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
int main() {
  int k;
  while (cin >> k) {
    vvi a(k, vi(k));
    int i;
    int j;
    for (i = 0; i < k; ++i) {
      for (j = 0; j < k; ++j) {
        cin >> a[i][j];
      }
      sort(a[i].begin(), a[i].end());
    }
    for (i = 0; i < k; ++i) {
      for (j = 0; j < k; ++j) {
        cout << a[i][j] << " ";
      }
      cout << endl;
    } 
    int minSum = 0;
    for (i = 0; i < k; ++i) {
      minSum += a[i][0]; 
    }
    vi sums(k+1);
    sums[0] = minSum;
    for (i = 0; i < k; ++i) {
      sums[i+1] += sums[0] - a[i][0] + a[i][1]; 
    }
    sort(sums.begin(),sums.end());
    for (i = 0; i < k; ++i) {
      cout << sums[i] << (i < k-1 ? " " : ""); 
    }
    cout << "\n";
  }

  return 0;
}
