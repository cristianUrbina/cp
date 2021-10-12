#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    char name[80];
    int year1,month1,day1,year2,month2,day2,courses;
    scanf("%s %d/%d/%d %d/%d/%d %d",&name,&year1,&month1,&day1,&year2,&month2,&day2,&courses);
    if(year1<2010&&year2<1991&&courses>40){
      printf("%s ineligible\n",name);
    }
    else if(year1<2010&&year2<1991&&courses<=40){
      printf("%s coach petitions\n",name);
    }
    else    printf("%s eligible\n",name);

  }
}
