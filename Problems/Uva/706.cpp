//https://onlinejudge.org/external/7/706.pdf
#include<bits/stdc++.h>
using namespace std;
int s;

string one(const int &line){
  int columns=s+2;
  int rows=2*s+3;
  string res(columns,' ');
  if(line==1||line==rows||line==rows/2+1){
    return res;
  }
  else{
    res.back()='|';
    return res;
  }
}
string two(const int &line){
  int columns=s+2;
  int rows=2*s+3;
  if(line==1||line==rows||line==rows/2+1){
    string res(columns,'-');
    res.back()=' ';
    res.front()=' ';
    return res;
  }
  else if(line<rows/2+1){
    string res(columns,' ');
    res.back()='|';
    return res;
  }
  else {
    string res(columns,' ');
    res.front()='|';
    return res;
  }
}
string three(const int &line){
  int columns=s+2;
  int rows=2*s+3;
  if(line==1||line==rows||line==rows/2+1){
    string res(columns,'-');
    res.back()=' ';
    res.front()=' ';
    return res;
  }
  else{
    string res(columns,' ');
    res.back()='|';
    return res;
  }
}
string four(const int &line){
  int columns=s+2;
  int rows=2*s+3;
  if(line==1||line==rows){
    string res(columns,' ');
    return res;
  }
  else if(line==rows/2+1){
    string res(columns,'-');
    res.back()=' ';
    res.front()=' ';
    return res;
  }
  else if(line<rows/2+1){
    string res(columns,' ');
    res.back()='|';
    res.front()='|';
    return res;
  }
  else {
    string res(columns,' ');
    res.back()='|';
    return res;
  }
}

string five(const int &line){
  int columns=s+2;
  int rows=2*s+3;
  if(line==1||line==rows||line==rows/2+1){
    string res(columns,'-');
    res.back()=' ';
    res.front()=' ';
    return res;
  }
  else if(line<rows/2+1){
    string res(columns,' ');
    res.front()='|';
    return res;
  }
  else {
    string res(columns,' ');
    res.back()='|';
    return res;
  }
}

string six(const int &line){
  int columns=s+2;
  int rows=2*s+3;
  if(line==1||line==rows||line==rows/2+1){
    string res(columns,'-');
    res.back()=' ';
    res.front()=' ';
    return res;
  }
  else if(line<rows/2+1){
    string res(columns,' ');
    res.front()='|';
    return res;
  }
  else {
    string res(columns,' ');
    res.front()='|';
    res.back()='|';
    return res;
  }
}
string seven(const int &line){
  int columns=s+2;
  int rows=2*s+3;
  if(line==1){
    string res(columns,'-');
    res.back()=' ';
    res.front()=' ';
    return res;
  }
  else if(line==rows||line==rows/2+1){
    string res(columns,' ');
    return res;
  }
  else{
    string res(columns,' ');
    res.back()='|';
    return res;
  }
}
string eight(const int &line){
  int columns=s+2;
  int rows=2*s+3;
  if(line==1||line==rows||line==rows/2+1){
    string res(columns,'-');
    res.back()=' ';
    res.front()=' ';
    return res;
  }
  else {
    string res(columns,' ');
    res.front()='|';
    res.back()='|';
    return res;
  }
}

string nine(const int &line){
  int columns=s+2;
  int rows=2*s+3;
  if(line==1||line==rows||line==rows/2+1){
    string res(columns,'-');
    res.back()=' ';
    res.front()=' ';
    return res;
  }
  else if(line>rows/2+1){
    string res(columns,' ');
    res.back()='|';
    return res;
  }
  else {
    string res(columns,' ');
    res.front()='|';
    res.back()='|';
    return res;
  }
}
string zero(const int &line){
  int columns=s+2;
  int rows=2*s+3;
  if(line==1||line==rows){
    string res(columns,'-');
    res.back()=' ';
    res.front()=' ';
    return res;
  }
  else if(line==rows/2+1){
    string res(columns,' ');
    return res;
  }
  else {
    string res(columns,' ');
    res.front()='|';
    res.back()='|';
    return res;
  }
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  string numbers;
  while(cin>>s>>numbers&&s!=0){
    int columns=s+2;
    int rows=2*s+3;
    for(int i = 0;i<rows;++i){
      string line;
      // cout << "Row"<<i+1;
      for(int j = 0; j<numbers.size();j++){
        char number = numbers[j];
        if(number == '1'){
          line+=one(i+1);
        }
        else if(number == '1'){
          line+=one(i+1);
        }
        else if(number == '2'){
          line+=two(i+1);
        }
        else if(number == '3'){
          line+=three(i+1);
        }
        else if(number == '4'){
          line+=four(i+1);
        }
        else if(number == '5'){
          line+=five(i+1);
        }
        else if(number == '6'){
          line+=six(i+1);
        }
        else if(number == '7'){
          line+=seven(i+1);
        }
        else if(number == '8'){
          line+=eight(i+1);
        }
        else if(number == '9'){
          line+=nine(i+1);
        }
        else line+=zero(i+1);
        if(j<numbers.size()-1)line+=" ";
      }
      cout << line<<"\n";
    }
    cout << "\n";
  }
  return 0;
}
