#include<bits/stdc++.h>
using namespace std;
int main(){
  string month;
  int day;
  cin>>month>>day;
  if((month=="DEC"&&day==25)||(month=="OCT"&&day==31)) cout << "yup" << endl;
  else cout << "nope" << endl;
  return 0;
}
