//https://onlinejudge.org/external/131/13151.pdf
#include<bits/stdc++.h>
using namespace std;
int valueOfI(const string &instruction,int &i){
  if(instruction == "i--"){
    return i-1;
  }
  else if(instruction == "i++"){
    return i+1;
  }
  else return i;
}

int printedNumber(const string &instruction,int &i){
  if(instruction == "++i"){
    return i+1;
  }
  else if (instruction == "i++"||instruction  == "i--"||instruction  == "i"){
    return i;
  }
  else return i-1;
}

int converter(const string &number){
  if(number[0]=='0'){
    if(number[1]=='x'){
      return stoi(number,nullptr,16);
    }
    else return stoi(number,nullptr,8);
  }
  return stoi(number);
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  string number;
  int t;
  while(cin>>number>>t&&t!=0){
    int i = converter(number);
    int marks=0;
    while(t--){
      string instruction;
      int printed;
      cin>>instruction>>printed;
      if(printed == printedNumber(instruction,i)) marks++;
      i = valueOfI(instruction,printed);
    }
    cout << marks << "\n";
  }
  return 0;
}
