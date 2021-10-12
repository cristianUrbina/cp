// https://onlinejudge.org/external/101/10107.pdf
#include<bits/stdc++.h>
using namespace std;
// TLE
// int main(){
//   freopen("i.txt", "r", stdin);
//   freopen("o.txt", "w", stdout);
//   vector<int> nums;
//   int n;
//   while(scanf("%d",&n)!=EOF){
//     nums.push_back(n);
//     sort(nums.begin(),nums.end());
//     int median;
//     if(nums.size()==1){
//       median = nums[0];
//     }
//     else if(nums.size()%2!=0){
//       median = nums[(nums.size()-1)/2];
//     }
//     else{
//       median = (nums[(nums.size()-1)/2]+nums[(nums.size()-1)/2+1])/2;
//     }
//     cout << median << endl;
//   }
//   return 0;
// }
// int main(){
//   // freopen("i.txt", "r", stdin);
//   // freopen("o.txt", "w", stdout);
//   int n = 1;
//   int a[10001];
//   while(scanf("%d",&a[n])!=EOF){
//     sort(a,a+n+1);
//     // if(n==0) printf("%d",a[0]);
//     if(n%2==0){
//       printf("%d",(a[n/2]+a[n/2+1])/2);
//     }
//     else printf("%d",a[n/2+1]);
//     printf("\n");
//     ++n;
//   }
//   return 0;
// }
// Internet AC
// #include <iostream>
// #include <cmath>
// #include <cstdio>
// #include <algorithm>
// using namespace std;
//
//
// int main()
// {
//     freopen("i.txt", "r", stdin);
//     freopen("o.txt", "w", stdout);
//     int n=1;
//     int a[10001];
//     while(scanf("%d", &a[n])==1){
//             sort(a, a+n+1);
//             if(n==1){
//                 printf("%d\n", a[1]);
//             }
//             else if(n%2==0){
//                 printf("%d\n", (a[n/2]+a[(n/2)+1])/2);
//             }
//             else if(n%2!=0){
//                 printf("%d\n", a[(n/2)+1]);
//             }
//                 n++;
//     }
//     return 0;
// }
int main(){
  priority_queue<int> qM;
  priority_queue<int,vector<int>,greater<int>> qm;
  int temp;
  while(scanf("%d",&temp)!=EOF){
    if(!qm.size()||qM.size()&&temp>qM.top()||temp>=qm.top()){
      qm.push(temp);
      if(qm.size()-1>qM.size()){
        qM.push(qm.top());
        qm.pop();
      }
    }
    else {
      qM.push(temp);
      if(qm.size()<qM.size()-1){
        // printf("here 3\n");
        qm.push(qM.top());
        qM.pop();
      }
    }
    if((qm.size()+qM.size())%2==0){
      printf("%d\n",(qm.top()+qM.top())/2);
    }
    else {
      if(qm.size()>qM.size()) printf("%d\n",qm.top());
      else printf("%d\n",qM.top());
    }
  }
  return 0;
}
