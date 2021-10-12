#include<bits/stdc++.h>
using namespace std;
int main(){
  int gold, silver, cooper;
  cin>>gold>>silver>>cooper;
  int buyingPower = gold*3+silver*2+cooper;
  if(buyingPower>=8){
    cout << "Province or Gold\n";
  }
  else if(buyingPower>=6){
    cout << "Duchy or Gold\n";
  }
  else if(buyingPower==5){
    cout << "Duchy or Silver\n";
  }
  else if(buyingPower>=3){
    cout << "Estate or Silver\n";
  }
  else if(buyingPower >= 2){
    cout << "Estate or Copper\n";
  }
  else cout << "Copper\n";
  return 0;
}
