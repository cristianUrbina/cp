//https://onlinejudge.org/external/10/1061.pdf
#include<bits/stdc++.h>
using namespace std;
unordered_map<string,vector<string>> blood{
  make_pair("A",vector<string>{"AA","AO"}),
  make_pair("B",vector<string>{"BB","BO"}),
  make_pair("O",vector<string>{"OO"}),
  make_pair("AB",vector<string>{"AB"}),
};
bool isValid(const string &parent1,const string &parent2,const string &child){
  for(int i =0;i<2;++i){
    for(int j = 0; j<2;++j){
      string test = "";
      test+=parent1[i];
      test+=parent2[j];
      sort(test.begin(),test.end());
      if(test==child) return true;
    }
  }
  return false;
}
vector<string> parentSearcher(const string &parent, const string &child){
  unordered_set<string>possibles;
  vector<string> result;
  auto parentIt = blood.find(parent);
  auto childIt = blood.find(child);
  for(auto key:blood){
    for(string combination:key.second){
      for(string parentComb:parentIt->second){
        for(string childComb:childIt->second){
          if(isValid(parentComb,combination,childComb)&&possibles.find(key.first)==possibles.end()){
            possibles.insert(key.first);
            result.push_back(key.first);
          }
        }
      }
    }
  }
  return result;
}
vector<string> childMaker(const string &parent1,const string &parent2){
  unordered_set<string>possibles;
  vector<string> result;
  auto parent1It = blood.find(parent1);
  auto parent2It = blood.find(parent2);
  for(auto key:blood){
    for(string combination:key.second){
      for(string parent1Comb:parent1It->second){
        for(string parent2Comb:parent2It->second){
          if(isValid(parent1Comb,parent2Comb,combination)&&possibles.find(key.first)==possibles.end()){
            possibles.insert(key.first);
            result.push_back(key.first);
          }
        }
      }
    }
  }
  return result;
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int caseN = 1;
  string parent1,parent2,child;
  while(cin>>parent1>>parent2>>child&&parent1!="E"){
    cout << "Case "<<caseN<<": ";
    if(child=="?"){
      cout << parent1 << " " << parent2;
      vector<string> result = childMaker(parent1.substr(0,parent1.size()-1),parent2.substr(0,parent2.size()-1));
      if(result.size()>1){
        cout<<" {";
        if(parent1.back()=='-'&&parent2.back()=='-'){
          for(int i = 0; i<result.size();++i){
            cout<<result[i]<<"-";
            if(i<result.size()-1)cout<<", ";
          }
        }
        else{
          for(int i = 0; i<result.size();++i){
            cout<<result[i]<<"-, "<<result[i]<<"+";
            if(i<result.size()-1)cout<<", ";
          }
        }
        cout<<"}";
      }
      else if(result.size()==0) cout << "IMPOSSIBLE\n";
      else {
        if(parent1.back()=='-'&&parent2.back()=='-'){
          cout<<" "<<result[0]<<"-";
          }
        else{
            cout<<" {"<<result[0]<<"-, "<<result[0]<<"+}";
            }
        }
    }
    else if(parent1=="?"){
      vector<string> result = parentSearcher(parent2.substr(0,parent2.size()-1),child.substr(0,child.size()-1));
      if(result.size()>1){
        cout<<"{";
        if(parent2.back()=='-'&&child.back()=='+'){
          for(int i = 0; i<result.size();++i){
            cout<<result[i]<<"+";
            if(i<result.size()-1)cout<<", ";
          }
        }
        else{
          for(int i = 0; i<result.size();++i){
            cout<<result[i]<<"-, "<<result[i]<<"+";
            if(i<result.size()-1)cout<<", ";
          }
        }
        cout<<"} ";
      }
      else if(result.size()==0) cout << "IMPOSSIBLE ";
      else {
        if(parent2.back()=='-'&&child.back()=='-'){
          cout<<result[0]<<"-";
        }
        else{
          cout<<"{"<<result[0]<<"-, "<<result[0]<<"+} ";
        }
      }
      cout << parent2 << " " << child;
    }
    else{
      cout<<parent1;
      vector<string> result = parentSearcher(parent1.substr(0,parent1.size()-1),child.substr(0,child.size()-1));
      if(result.size()>1){
        cout<<" {";
        if(parent1.back()=='-'&&child.back()=='+'){
          for(int i = 0; i<result.size();++i){
            cout<<result[i]<<"+";
            if(i<result.size()-1)cout<<", ";
          }
        }
        else{
          for(int i = 0; i<result.size();++i){
            cout<<result[i]<<"-, "<<result[i]<<"+";
            if(i<result.size()-1)cout<<", ";
          }
        }
        cout<<"} ";
      }
      else if(result.size()==0) cout << " IMPOSSIBLE ";
      else {
        if(parent1.back()=='-'&&child.back()=='-'){
          cout<<result[0]<<"-";
        }
        else{
          cout<<" {"<<result[0]<<"+, "<<result[0]<<"-} ";
        }
      }
      cout << child;
    }
    cout << "\n";
    caseN++;
  }
  return 0;
}
