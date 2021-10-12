//https://onlinejudge.org/external/126/12658.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string line1,line2,line3,line4,line5;
  vector<string> uno = {".*.",".*.",".*.",".*.",".*."};
  vector<string> dos = {"***","..*","***","*..","***"};
  vector<string> tres = {"***","..*","***","..*","***"};
  vector<string> character(5);
  cin >> n;
  cin>>line1>>line2>>line3>>line4>>line5;
  for(int i = 0; i<n;++i){
    character[0] = line1.substr(3*i+i,3);
    character[1] = line2.substr(3*i+i,3);
    character[2] = line3.substr(3*i+i,3);
    character[3] = line4.substr(3*i+i,3);
    character[4] = line5.substr(3*i+i,3);
    if(character == uno) cout<<"1";
    else if(character == dos) cout << "2";
    else cout << "3";
  }
  cout << "\n";
  return 0;
}
