//https://onlinejudge.org/external/109/10978.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int n;
  while(cin>>n&&n){
    vector<string>arr(n,"_");
    int index = 0,nSize=n;
    string card,name;
    for(int i = 0; i<n;++i){
      cin>>card>>name;
      int r = 1;
      while(r<name.size()){
        if(arr[index]=="_") r++;
        else{
          // cout << "Ocupado "<< index << endl;
        }
        index++;
        index%=n;
      }
      while(arr[index]!="_"){
        index++;
        index%=n;
      }
      index%=nSize;
      arr[index] = card;
      // for(auto card2:arr){
      //   cout << card2 << " ";
      // }
      // cout << "\n";
      // cout << "Arr " << index << ": "<<card << endl;
      index++;
      index%=n;
    }
    // cout<< "Imprime arr"<<endl;
    for(int i = 0; i<n;i++){
      cout << arr[i];
      if(i<n-1) cout << " ";
    }
    cout << "\n";
  }
  return 0;
}
