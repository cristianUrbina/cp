//https://onlinejudge.org/external/4/488.pdf
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
int main(){
  int n;
  scanf("%d",&n);
  while (n--) {
    int a,f;
    scanf("\n%d %d",&a, &f);
    while (f--) {
      for (int i = 1; i <= a; ++i) {
	for (int j = 0; j < i; ++j) {
	  printf("%d",i);
	}
	printf("\n");
      }
      for (int i = a-1; i>=1; --i) {
	for (int j = 0; j < i; ++j) {
	  printf("%d",i);
	}
	printf("\n");
      }
      if (f || n) {
	printf("\n");
      }
    }      
  }
  return 0;
}
