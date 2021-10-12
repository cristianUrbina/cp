// https://onlinejudge.org/external/131/13145.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  string message,nString;
  int n;
  while(getline(cin,nString)){
    n = stoi(nString);
    if(!n) break;
    getline(cin,message);
    for(int i = 0; i<message.size();++i){
      int letter = message[i];
      if(message[i]>='a'&&message[i]<='z'){
        letter-='a';
        letter+=n%26;
        if(letter<0)letter+=26;
        letter%=26;
        message[i]=letter+'a';
      }
      else if(message[i]>='A'&&message[i]<='Z'){
        letter-='A';
        letter+=n%26;
        if(letter<0)letter+=26;
        letter%=26;
        message[i]=letter+'A';
      }
    }
    cout << message << endl;
  }
  return 0;
}
