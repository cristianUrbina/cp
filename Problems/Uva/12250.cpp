#include<bits/stdc++.h>
using namespace std;
int main(){
  string word;
  cin>>word;
  long long cnt = 1;
  while(word!="#"){
    cout << "Case "<<cnt++<<": ";
    if(word=="HOLA") cout << "SPANISH" <<  endl;
    else if( word == "HELLO") cout << "ENGLISH" << endl;
    else if (word== "HALLO") cout << "GERMAN" << endl;
    else if (word == "BONJOUR") cout << "FRENCH" <<endl;
    else if (word == "CIAO") cout << "ITALIAN" << endl;
    else if(word=="ZDRAVSTVUJTE") cout << "RUSSIAN"<<endl;
    else cout << "UNKNOWN"<<endl;
    cin>>word;
  }
  return 0;
}
