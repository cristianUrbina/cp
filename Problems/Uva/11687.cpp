//https://onlinejudge.org/external/116/11687.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  string number;
  while(getline(cin,number)&&number != "END"){
    int cnt = 0;
    while(number!="1"){
      number = to_string(number.length());
      cnt++;
    }
    cout << ++cnt << endl;
  }
  return 0;
}
