//https://onlinejudge.org/external/106/10646.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,caseNo=0;
  cin>>t;
  while(t--){
    vector<string> cards(27);
    for(int i = 0; i<27;++i){
      cin>>cards[i];
    }
    vector<string> hand(25);
    for(int i =0; i<25;++i){
      cin>>hand[i];
    }
    int y=0,x;
    string card;
    for(int i = 0; i<3;++i){
      card = cards.back();
      cards.pop_back();
      if(card[0]>='2'&&card[0]<='9'){
        string value;
        value = card[0];
        x = stoi(value);
      }
      else x = 10;
      int top=10-x;
      while(top--){
        cards.pop_back();
      }
      y+=x;
    }
    for(int i=0; i<25;++i){
      cards.push_back(hand[i]);
    }
    cout<<"Case "<<++caseNo<<": "<<cards[y-1]<<endl;
  }
  return 0;
}
