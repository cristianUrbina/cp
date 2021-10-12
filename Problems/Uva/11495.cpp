//https://onlinejudge.org/external/114/11495.pdf
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
long long cnt = 0;
int n;

void merge(int *a,int l,int r){
  int m = (l+r)/2;
  int n1 = m-l+1, n2 = r-m;
  int la[n1],ra[n2];
  for(int i = 0;i<n1;++i){
    la[i] = a[l+i];
  }
  for(int i = 0;i<n2;++i){
    ra[i] = a[m+1+i];
  }
  int i=0,j=0,k=l;
  while(i<n1&&j<n2){
    if(la[i]<=ra[j]){
      a[k] = la[i];
      ++i;
    }
    else {
      cnt+=n1-i;
      a[k] = ra[j];
      ++j;
    }
    ++k;
  }
  while(i<n1){
    a[k++] = la[i++];
  }
  while(j<n2){
    a[k++] = ra[j++];
  }
}

void mergeSort(int *a,int l,int r){
  if(l<r){
    int m = (l+r)/2;
    mergeSort(a,l,m);
    mergeSort(a,m+1,r);
    merge(a,l,r);
  }
}

int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  while(cin>>n&&n){
    cnt=0;
    int a[n];
    for(int i = 0; i<n;++i){
      cin>>a[i];
    }
    mergeSort(a,0,n-1);
    if(cnt%2==1) cout << "Marcelo";
    else cout << "Carlos";
    cout << "\n";
  }
  return 0;
}
