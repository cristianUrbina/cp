
// https://onlinejudge.org/external/4/466.pdf
#include<bits/stdc++.h>
#define vvi vector<vector<int>>
#define vi vector<int>
#define vs vector<string>
using namespace std;
// vs reflect(vs &original){
//   int n = original.size();
//   string tmp (n,' ');
//   vs result(n,tmp);
//   for(int i = 0; i<n;++i){
//     for(int j = 0; j<n;++j){
//       result[n-1-i][j] = original[i][j];
//     }
//   }
//   return result;
// }
// vs rotate90(vs &original){
//   int n = original.size();
//   string tmp (n,' ');
//   vs result(n,tmp);
//   for(int i = 0; i<n;++i){
//     for(int j = 0; j<n;++j){
//       result[j][n-1-i] = original[i][j];
//     }
//   }
//   return result;
// }
int n;
pair<int,int> rot(pair<int,int> coor){
  return make_pair(n-1-coor.second,coor.first);
}
pair<int,int> rot90(pair<int,int> coor){
  return rot(coor);
}
pair<int,int> rot180(pair<int,int> coor){
  return rot(rot90(coor));
}
pair<int,int> rot270(pair<int,int> coor){
  return rot(rot180(coor));
}
pair<int,int> reflect(pair<int,int> coor){
  return make_pair(n-1-coor.first,coor.second);
}
// string checker(vs original, vs pattern){
//   if(original == pattern){
//     return "preserved";
//   }
//   original = rotate90(original);
//   if(original == pattern){
//     return "rotated 90 degrees";
//   }
//   original = rotate90(original);
//   if(original == pattern){
//     return "rotated 180 degrees";
//   }
//   original = rotate90(original);
//   if(original == pattern){
//     return "rotated 270 degrees";
//   }
//   original = rotate90(original);
//   original = reflect(original);
//   if(original == pattern){
//     return "reflected vertically";
//   }
//   original = rotate90(original);
//   if(original == pattern){
//     return "reflected vertically and rotated 90 degrees";
//   }
//   original = rotate90(original);
//   if(original == pattern){
//     return "reflected vertically and rotated 180 degrees";
//   }
//   original = rotate90(original);
//   if(original == pattern){
//     return "reflected vertically and rotated 270 degrees";
//   }
//   return "improperly transformed";
// }

string checker(vs original, vs pattern){
  bool flag = true;
  for(int i = 0; i<n&&flag;++i){
    for(int j = 0; j<n;++j){
      if(original[i][j]!=pattern[i][j])flag = false;
    }
  }
  if(flag){
    return "preserved";
  }
  flag = true;
  for(int i = 0; i<n&&flag;++i){
    for(int j = 0; j<n;++j){
      pair<int,int> coor = rot90(make_pair(i,j));
      if(original[coor.first][coor.second]!=pattern[i][j])flag = false;
    }
  }
  if(flag){
    return "rotated 90 degrees";
  }
  flag = true;
  for(int i = 0; i<n&&flag;++i){
    for(int j = 0; j<n;++j){
      pair<int,int> coor = rot180(make_pair(i,j));
      if(original[coor.first][coor.second]!=pattern[i][j])flag = false;
    }
  }
  if(flag){
    return "rotated 180 degrees";
  }
  flag = true;
  for(int i = 0; i<n&&flag;++i){
    for(int j = 0; j<n;++j){
      pair<int,int> coor = rot270(make_pair(i,j));
      if(original[coor.first][coor.second]!=pattern[i][j])flag = false;
    }
  }
  if(flag){
    return "rotated 270 degrees";
  }
  flag = true;
  for(int i = 0; i<n&&flag;++i){
    for(int j = 0; j<n;++j){
      pair<int,int> coor = reflect(make_pair(i,j));
      if(original[coor.first][coor.second]!=pattern[i][j])flag = false;
    }
  }
  if(flag){
    return "reflected vertically";
  }
  flag = true;
  for(int i = 0; i<n&&flag;++i){
    for(int j = 0; j<n;++j){
      pair<int,int> coor = reflect(rot90(make_pair(i,j)));
      if(original[coor.first][coor.second]!=pattern[i][j])flag = false;
    }
  }
  if(flag){
    return "reflected vertically and rotated 90 degrees";
  }
  flag = true;
  for(int i = 0; i<n&&flag;++i){
    for(int j = 0; j<n;++j){
      pair<int,int> coor = reflect(rot180(make_pair(i,j)));
      if(original[coor.first][coor.second]!=pattern[i][j])flag = false;
    }
  }
  if(flag){
    return "reflected vertically and rotated 180 degrees";
  }
  flag = true;
  for(int i = 0; i<n&&flag;++i){
    for(int j = 0; j<n;++j){
      pair<int,int> coor = reflect(rot270(make_pair(i,j)));
      if(original[coor.first][coor.second]!=pattern[i][j])flag = false;
    }
  }
  if(flag){
    return "reflected vertically and rotated 270 degrees";
  }
  return "improperly transformed";
}

int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  int caseN=0;
  while(cin>>n){
    string tmp(n,' ');
    vs original(n,tmp),pattern(n,tmp);
    string s1,s2;
    for(int i = 0; i<n;++i){
      cin>>s1>>s2;
      original[i] = s1;
      pattern[i] = s2;
    }
    cout<<"Pattern "<< ++caseN << " was " << checker(original,pattern)<<".\n";
  }
  return 0;
}
