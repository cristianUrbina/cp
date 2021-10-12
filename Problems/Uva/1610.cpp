// https://onlinejudge.org/external/16/1610.pdf
#include<bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vs vector <string>
using namespace std;
int n;
string spr(string &s1,string &s2){
  string result="";
  int i = 0,sz1 = s1.size(),sz2 = s2.size();
  while(i<sz1&&s1[i]==s2[i]){
    result+=s1[i++];
  }
  if(i==sz1-1) result+=s1[i++];
  if(i==sz1)return result;
  if(s1[i]+1!=s2[i]) {
    result+=s1[i]+1;
    return result;
  }
  if(i!=sz2-1) {
    result += s2[i];
    return result;
  }
  string result2 = result;
  int index=i+1;
  result2+=s2[index-1];
  while(index<sz2&&s2[index]=='A'){
    result2+='A';
    ++index;
  }
  result2+='A';
  index=i+1;
  result+=s1[index-1];
  while(index<sz1&&s1[index]=='Z'){
    result+='Z';
    ++index;
  }
  if (index==sz1-1)result+=s1[index];
  else if(index<sz1)result+=s1[index]+1;
   else {}//result+='A';
  if(result.size()<result2.size()){
    return result;
  }
  else if(result.size()>result2.size()&&result2.size()<sz2){
    return result2;
  }
  else{
    if(result<result2){
      return result;
    }
    else {
      if (result2.size()<=sz2)return result2;
      else return result;
    }

  }
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  while(cin>>n&&n){
    vs names(n);
    for(int i = 0; i<n;++i){
      cin>>names[i];
    }
    int mid1=(n-1)/2,mid2 = (n-1)/2+1;
    sort(names.begin(),names.end());
    cout << spr(names[mid1],names[mid2])<<"\n";
  }
  return 0;
}
