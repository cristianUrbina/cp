#include<bits/stdc++.h>
using namespace std;

string oneDigitizer(string number){
  int sum=0;
  for(char c:number){
    sum+=c-'0';
  }
  if(to_string(sum).size()>1){
    return to_string(stoi(oneDigitizer(to_string(sum))));
  }
  else return to_string(sum);

}
string sumCalculator(string name){
  int sum=0;
  for(int c:name){
    if(c>='a'&&c<='z'){
      sum+=c-'a'+1;
      }
    else if(c>='A'&&c<='Z'){
      sum+=c-'A'+1;
    }
    else{}
  }
  return to_string(sum);
}
int main(){
  string name1,name2;
  while(getline(cin,name1)&&getline(cin,name2)){
    int n1,n2;
    n1 = stoi(oneDigitizer(sumCalculator(name2)));
    n2 = stoi(oneDigitizer(sumCalculator(name1)));
    if(n1>n2){
      int aux = n1;
      n1 = n2;
      n2 = aux;
    }
    printf("%.2f %%\n",(n2!=0)?float(n1)/float(n2)*100:0);
  }
  return 0;
}
