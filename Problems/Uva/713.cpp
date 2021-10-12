//https://onlinejudge.org/external/7/713.pdf
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

void sumChar(char a,char b,string &result, string &remainder){
  string n (1,a), m (1,b);
  string sum = to_string(stoi(n)+stoi(m));
  if(remainder.size()){
    sum = to_string(stoi(sum)+stoi(remainder));
    remainder = "";
  }
  if(sum.size()>1) {
    remainder = sum[0];
    sum.erase(0,1);
  }
  result += sum;
}

void sumChar(char a,string &result, string &remainder){
  string n (1,a);
  string sum = n;
  if(remainder.size()){
    sum = to_string(stoi(sum)+stoi(remainder));
    remainder = "";
  }
  if(sum.size()>1) {
    remainder = sum[0];
    sum.erase(0,1);
  }
  result += sum;
}
// 102
// -19
//
string restString(string,string);
string sumString(string a, string b){
  string result = "";
  string remainder = "";
  string sign = "";
  if(a[0]== '-' && b[0] != '-'||a[0]!= '-' && b[0] == '-'){
    string aAux = a, bAux = b;
    if(a[0]=='-') a.erase(0,1);
    if(b[0]=='-') b.erase(0,1);
    if(a<b) {
      return (bAux[0]=='-'?"-":"")+restString(b,a);
    }
    else {
      return (aAux[0]=='-'?"-":"")+restString(a,b);
    }
  }
  if(a[0] == '-'){
    sign = "-";
    a.erase(0,1);
    b.erase(0,1);
  }
  long long i = a.size(), j = b.size();
  while(i--&&j--){
    sumChar(a[i],b[j],result,remainder);
  }
  ++i;
  if(j<0)j=0;
  // cout << i << " " << j << endl;
  while(i--){
    sumChar(a[i],result,remainder);
  }
  while(j--){
    sumChar(b[j],result,remainder);
  }
  if(remainder.size()) result+=remainder;
  result+=sign;
  while(result.back()=='0'){
    result.pop_back();
  }
  reverse(result.begin(),result.end());
  return result;
}

//    19
// -
//    1
//

void restChar(char a,char b,string &result, string &remainder){
  string n(1,a), m(1,b);
  if(remainder.size()) {
    m=to_string(stoi(m)+stoi(remainder));
    remainder = "";
  }
  string diff;
  if(n>=m) diff = to_string(stoi(n)-stoi(m));
  else {
    diff = to_string(stoi("1"+n)-stoi(m));
    remainder = "1";
  }
  result += diff;
}

string restString(string a, string b){
  string result = "";
  string remainder = "";
  string sign ="";
  if(a=="0"&&b=="0") return "0";
  if(b[0]=='-'){
    b.erase(0,1);
    return sumString(a,b);
  }
  if(a[0]=='-'){
    sign = '-';
    a.erase(0,1);
  }
  if(a<b){
    sign = '-';
    string tmp=a;
    a=b;
    b=tmp;
  }
  long long i = a.size(), j = b.size();
  while(i--&&j--){
    restChar(a[i],b[j],result,remainder);
    // cout  << a[i] <<" "<< b[i] << endl;
    // cout << result << endl;
  }
  ++i;
  if(j<0)j=0;
  // cout << i << " " << j << endl;
  while(i--){
    string diff;
    string tmp (1,a[i]);
    if(remainder.size()){
      if(tmp<remainder){
        diff = to_string(stoi("1"+a[i]));
        remainder = "1";
      }
      else {
        diff = to_string(stoi(tmp)-stoi(remainder));
        remainder = "";
      }
    }
    else diff = a[i];
    result+=diff;
  }
  while(result.back()=='0'){
    result.pop_back();
  }
  reverse(result.begin(),result.end());
  return sign+result;
}

int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int n;
  cin>>n;
  while(n--){
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    string res = sumString(a,b);
    while(res.back()=='0'){
      res.pop_back();
    }
    reverse(res.begin(),res.end());
    cout << res << "\n";
  }
  return 0;
}
