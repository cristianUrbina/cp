//https://onlinejudge.org/external/10/1091.pdf
#include<bits/stdc++.h>
using namespace std;
int w(char c){
  if(c=='-') return 10;
  else return c-'0';
}
int cCal(string const &s){
  int c = 0;
  int n = s.size();
  for(int i = 1;i<=n;++i){
    c+=((n-i)%10+1)*w(s[i-1]);
  }
  c%=11;
  return c;
}
int kCal(string &s,int c){
  int n = s.size();
  int k = 0;
  if(c!=10) s += to_string(c);
  else s+="-";
  for(int i = 1;i<=n+1;++i){
    k+=((n-i+1)%9+1)*w(s[i-1]);
  }
  k%=11;
  s.pop_back();
  return k;
}

unordered_map<string,string>encoding{
  make_pair("00001","0"),
  make_pair("10001","1"),
  make_pair("01001","2"),
  make_pair("11000","3"),
  make_pair("00101","4"),
  make_pair("10100","5"),
  make_pair("01100","6"),
  make_pair("00011","7"),
  make_pair("10010","8"),
  make_pair("10000","9"),
  make_pair("00100","-"),
  make_pair("00110","S")
};

string decoder(const vector<int>&d,int mMin,int mMax){
  if (m%6 != 5)		return "bad code";
	if ((m + 1)/6 < 5)	return "bad code";
  string encoded="";
  int m = d.size();
  for(int i = 0; i<m;++i){
    if(d[i]>=(mMax/1.05)*0.95&&d[i]<=mMax) encoded+="1";
    else if(d[i]>=mMin&&d[i]<=(mMin/0.95)*1.05) encoded +="0";
    else return "bad code";
  }
  // cout << encoded << endl;
  string message="";
  for(int i = 0; i<m;i+=6){
    string character = encoded.substr(i,5);
    // cout <<i/6 << " " <<character << " "<<message << endl;
    auto it = encoding.find(character);
    if(it!=encoding.end()) message+=it->second;
    else return "bad code";
    if(i+5<m&&encoded[i+5]!='0') return "bad code";
  }
  // cout << message << endl;
  if(message[0]!='S'||message.back()!='S') return "bad code";
  string realMessage (message,1,message.size()-4);
  int c = cCal(realMessage);
  int k = kCal(realMessage,c);
  // cout << "C " << c << " k "<<k<<endl;
  if(w(message[message.size()-3])!=c)return "bad C";
  else if(w(message[message.size()-2])!=k) return "bad K";
  else{
    return realMessage;
  }
}

int judge(const string &l){
  if(l=="bad code") return 1;
  else if(l=="bad K") return 2;
  else if(l=="bad C") return 3;
  else return 4;
}

int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int m,caseN=0;
  while(cin>>m&&m!=0){
    vector<int> d(m);
    int minWidth=1e9;
    int maxWidth=0;
    for(int i = 0; i<m;++i){
      cin>>d[i];
      minWidth = min(minWidth,d[i]);
      maxWidth = max(maxWidth,d[i]);
    }
    string result = decoder(d);
    reverse(d.begin(),d.end());
    string result2 = decoder(d);
    int calif1 = judge(result);
    int calif2 = judge(result2);
    if(calif2>calif1) result = result2;
    cout << "Case "<< ++caseN << ": " << result <<"\n";
  }
  return 0;
}
