//https://onlinejudge.org/external/2/278.pdf
#include<bits/stdc++.h>
using namespace std;
int knights(int n,int m){
  int result=0;
  if(n%2==0){
    result = n/2*m;
  }
  else{
    if(m%2==0){
      result = m/2*n;
    }
    else {
      result = (n/2)*(m/2) + ((n+1)/2*(m+1)/2);
    }
  }
  return result;
}
int rooks(int n,int m){
  return min(n,m);
}
int queens(int n,int m){
  if(n!=m){
    return min(n,m);
  }
  else return n-1;
}
int kings(int n, int m){
  return ceil(n/2.0)*ceil(m/2.0);
}
int main(){
  int m,n,t,result;
  char piece;
  cin>>t;
  while(t--){
    cin>>piece>>n>>m;
    if(piece=='r'){
      result = rooks(n,m);
    }
    else if(piece == 'k'){
      result = knights(n,m);
    }
    else if(piece == 'Q'){
      result = queens(n,m);
    }
    else{
      result = kings(n,m);
    }
    cout << result << "\n";
  }
  return 0;
}
