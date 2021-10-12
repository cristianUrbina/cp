//https://onlinejudge.org/external/4/489.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  //ios_base::sync_with_stdio(0);
	//cin.tie(0);	cout.tie(0);
  //freopen("i.txt", "r", stdin);
  //freopen("o.txt", "w", stdout);
  unordered_set<char> chars;
  unordered_set<char> guessedChars;
  string word,guessed;
  int round;
  while(cin>>round&&round!=-1){
    int lifes=7;
    cin>>word>>guessed;
    for(int i = 0;i<word.length();++i){
      chars.insert(word[i]);
    }
    for(int i = 0;i<guessed.length()&&lifes&&!chars.empty();++i){
      auto it = chars.find(guessed[i]);
      if(it!=chars.end()){
        chars.erase(it);
      }
      else {
        if(guessedChars.find(guessed[i])==guessedChars.end()){
          lifes--;
        }
      }
      guessedChars.insert(guessed[i]);
    }
    cout<<"Round "<<round<<"\n";
    if(lifes<=0) cout<<"You lose."<<"\n";
    else if(chars.size()==0) cout << "You win."<<"\n";
    else cout<<"You chickened out."<<"\n";
    chars.clear();
    guessedChars.clear();
  }
  return 0;
}

//cc
