// https://onlinejudge.org/external/100/10013.pdf
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

bool cmp(string a,string b){
  if(a.size()==b.size()){
    for(int i = 0; i<a.size();++i){
      if(a[i]!=b[i]){
        return a[i]<b[i];
      }
    }
  }
  return a.size()<b.size();
}

void sumChar(char a,char b,string &result, string &carry){
  string n (1,a), m (1,b);
  string sum;
  if(n!="0"&&m!="0") sum = to_string(stoi(n)+stoi(m));
  else if(n!="0"&&m=="0")sum = to_string(stoi(n));
  else if(n=="0"&&m!="0")sum = to_string(stoi(m));
  else sum = "0";
  if(carry.size()){
    sum = to_string(stoi(sum)+stoi(carry));
    carry = "";
  }
  if(sum.size()>1) {
    carry = sum[0];
    sum.erase(0,1);
  }
  result += sum;
}

void sumChar(char a,string &result, string &carry){
  string n (1,a);
  string sum = n;
  if(carry.size()){
    if(sum!="0")sum = to_string(stoi(sum)+stoi(carry));
    else sum = carry;
    carry = "";
  }
  if(sum.size()>1) {
    carry = sum[0];
    sum.erase(0,1);
  }
  result += sum;
}

string restString(string,string);
string sumString(string &a, string &b){
  string result = "";
  string carry = "";
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
    sumChar(a[i],b[j],result,carry);
  }
  ++i;
  if(j<0)j=0;
  while(i--){
    sumChar(a[i],result,carry);
  }
  while(j--){
    sumChar(b[j],result,carry);
  }

  if(carry.size()) result+=carry;
  while(result.size()>1&&result.back()=='0'){
    result.pop_back();
  }
  reverse(result.begin(),result.end());
  return result;
}

void restChar(char a,char b,string &result, string &carry){
  string n(1,a), m(1,b);
  if(carry.size()) {
    m=to_string(stoi(m)+stoi(carry));
    carry = "";
  }
  string diff;
  if(!cmp(n,m)) diff = to_string(stoi(n)-stoi(m));
  else {
    diff = to_string(stoi("1"+n)-stoi(m));
    carry = "1";
  }
  result += diff;
}

string restString(string a, string b){
  string result = "";
  string carry = "";
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
  if(cmp(a,b)){
    sign = '-';
    string tmp=a;
    a=b;
    b=tmp;
  }
  long long i = a.size(), j = b.size();
  while(i--&&j--){
    restChar(a[i],b[j],result,carry);
  }
  ++i;
  if(j<0)j=0;
  while(i--){
    string diff;
    string tmp (1,a[i]);
    if(carry.size()){
      if(cmp(tmp,carry)){
        string one = "1";
        diff = to_string(stoi(one+tmp));
        carry = "1";
      }
      else {
        diff = to_string(stoi(tmp)-stoi(carry));
        carry = "";
      }
    }
    else diff = a[i];
    result+=diff;
  }
  while(result.size()>1&&result.back()=='0'){
    result.pop_back();
  }
  reverse(result.begin(),result.end());
  return sign+result;
}

string multChar(char a,char b,string &carry){
  string n(1,a),m(1,b);
  string res = to_string(stoi(n)*stoi(m));
  if(carry.size()){
    res = to_string(stoi(res)+stoi(carry));
    carry = "";
  }
  if(res.size()>1){
    carry = res[0];
    res.erase(0,1);
  }
  return res;
}

string sumVecString(vector<string>&a){
  string result = "0";
  for(auto x:a){
    result = sumString(result,x);
  }
  return result;
}

string multString(string a, string b){
  long long pointPos = 0;
  for(int i = a.size()-1 ;i>=0;--i){
    if(a[i]=='.') {
      pointPos+=a.size()-1-i;
      a.erase(i,1);
      break;
    }
  }
  for(int i = b.size()-1 ;i>=0;--i){
    if(b[i]=='.') {
      pointPos+=b.size()-1-i;
      b.erase(i,1);
      break;
    }
  }
  string sign = "";
  if(a[0]=='-'&&b[0]=='-'){
    a.erase(0,1);
    b.erase(0,1);
  }
  else if(a[0]=='-'&&b[0]!='-'){
    a.erase(0,1);
    sign = '-';
  }
  else if(a[0]!='-'&&b[0]=='-'){
    b.erase(0,1);
    sign = '-';
  }
  else{}
  string result = "";
  string carry = "";
  vector<string> arr(a.size());

  for(int m = 0,i = a.size()-1;i>=0;--i,++m){
    string tmp="";
    for(int j = b.size()-1;j>=0;--j){
      tmp += multChar(a[i],b[j],carry);
    }
    tmp+=carry;
    reverse(tmp.begin(),tmp.end());
    for(int k = a.size()-1; k>i;--k){
      tmp+="0";
    }
    arr[m] = tmp;
    carry = "";
  }
  result = sumVecString(arr);
  if(pointPos){
    if(--pointPos>result.size()-1){
      reverse(result.begin(),result.end());
      for(int i = result.size()-1;i<pointPos;++i){
        result +="0";
      }
      reverse(result.begin(),result.end());
    }
    result.insert(result.size()-1-(pointPos),".");
  }
  while(result.size()>1&&result.back()=='0'){
    result.pop_back();
  }
  return sign + result;
}

pair<string,string> divS(string a,string b){
  string cnt = "0";
  while(!cmp(a,b)){
    string one = "1";
    cnt = sumString(cnt,one);
    a = restString(a,b);
  }
  return make_pair(cnt,a);
}

pair<string,string> divString(string a,string b){
  string c="",r="";
  string d = a.substr(0,b.size());
  int i = b.size();
  if(cmp(d,b)) d+=a[i++];
  pair<string,string> tmp = divS(d,b);
  c+=tmp.first;
  r=tmp.second;
  for(;i<a.size();++i){
    if(r!="0")d = r+a[i];
    else d = a[i];
    tmp = divS(d,b);
    r=tmp.second;
    c+=tmp.first;
  }
  return make_pair(c,r);
}


string powString(string s,unsigned long long n){
  string result = "1";
  for(int i = 0; i<n;++i){
    result = multString(s,result);
  }
  return result;
}

int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int n;
  cin>>n;
  while(n--){
    string a = "", b = "";
    char tmpA,tmpB;
    int m;
    cin>>m;
    while(m--){
      cin>>tmpA>>tmpB;
      a+=tmpA;
      b+=tmpB;
    }
    cout << sumString(a,b) << endl;
    if(n)cout << "\n";
  }
  return 0;
}
