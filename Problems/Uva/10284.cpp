//https://onlinejudge.org/external/102/10284.pdf
#include<bits/stdc++.h>
using namespace std;
vector<char> board;
bool left(int n){
  return !(n%8);
}
bool right(int n){
  return n%8==7;
}
void rook(int n){
  for(int i = n-8;i>=0;i-=8){
    if(board[i]!='-'&&board[i]!='a') break;
    board[i]='a';
  }
  for(int i = n+8;i<64;i+=8){
    if(board[i]!='-'&&board[i]!='a') break;
    board[i]='a';
  }
  for(int i = n-1;i>=n-n%8;--i){
    if(board[i]!='-'&&board[i]!='a') break;
    board[i]='a';
  }
  for(int i = n+1;i<=n+7-n%8;++i){
    if(board[i]!='-'&&board[i]!='a') break;
    board[i]='a';
  }
}
void bishop(int n){
  if(!left(n)){
    for(int i = n-9;i>=0;i-=9){
      if(board[i]!='-'&&board[i]!='a') break;
      board[i]='a';
      if(left(i)) break;
    }
    for(int i = n+7;i<64;i+=7){
      if(board[i]!='-'&&board[i]!='a') break;
      board[i]='a';
      if(left(i)) break;
    }
  }
  if(!right(n)){
    for(int i = n+9;i<64;i+=9){
      if(board[i]!='-'&&board[i]!='a') break;
      board[i]='a';
      if(right(i)) break;
    }
    for(int i = n-7;i>=0;i-=7){
      if(board[i]!='-'&&board[i]!='a') break;
      board[i]='a';
      if(right(i)) break;
    }
  }
}
void whitePawn(int n){
  vector<int> attacking;
  if(left(n)){
    attacking = {n-7};
  }
  else if(right(n)){
    attacking = {n-9};
  }
  else attacking = {n-9,n-7};
  for(int x:attacking){
    if(x>=0&&x<=63&&board[x]== '-') board[x] = 'a';
  }
}
void blackPawn(int n){
  vector<int> attacking;
  if(left(n)){
    attacking = {n+9};
  }
  else if(right(n)){
    attacking = {n+7};
  }
  else attacking = {n+9,n+7};
  for(int x:attacking){
    if(x>=0&&x<=63&&board[x]== '-') board[x] = 'a';
  }
}
void knight(int n){
  vector<int> attacking;
  if(left(n)){
    attacking = {n-6,n-15,n+10,n+17};
  }
  else if(left(n-1)){
    attacking = {n-17,n-6,n-15,n+15,n+10,n+17};
  }
  else if(right(n+1)){
    attacking = {n-15,n+17,n+6,n+15,n-10,n-17};
  }
  else if(right(n)){
    attacking = {n+6,n+15,n-10,n-17};
  }
  else attacking = {n-6,n-15,n+10,n+17,n+6,n+15,n-10,n-17};
  for(int x:attacking){
    if(x>=0&&x<=63&&board[x]== '-') board[x] = 'a';
  }
}
void queen(int n){
  rook(n);
  bishop(n);
}
void king(int n){
  vector<int> attacking;
  if(left(n)){
    attacking = {n-7,n-8,n+1,n+8,n+9};
  }
  else if(right(n)){
    attacking = {n-9,n-8,n-1,n+8,n+7};
  }
  else attacking = {n-9,n-7,n-1,n+1,n-8,n+8,n+7,n+9};
  for(int x:attacking){
    if(x>=0&&x<=63&&board[x]== '-') board[x] = 'a';
  }
}

void printBoard(){
  for(int i = 0; i<64;++i){
    printf("%c",board[i]);
    if(i%8==7)printf("\n");
  }
}
int main(){
  // freopen("i.txt", "r", stdin);
  // freopen("o.txt", "w", stdout);
  char buffer[1000];
  while(scanf("%s",buffer)!=EOF){
    board = vector<char> (64,'-');
    char piece;
    int i = 0;
    string sbuffer = buffer;
    while(sscanf(sbuffer.c_str(),"%c",&piece)&&sbuffer.size()){
      sbuffer.erase(0,1);
      if(piece>='0'&&piece<='9'){
        i+=piece-'0';
      }
      else if(piece == '/') continue;
      else{
        board[i] = piece;
        i++;
      }
    }
    // printBoard();
    for(int i = 0; i<64;++i){
      if(board[i]=='r'||board[i]=='R'){
        rook(i);
      }
      else if(board[i]=='b'||board[i]=='B'){
        bishop(i);
      }
      else if(board[i]=='P'){
        whitePawn(i);
      }
      else if(board[i]=='p'){
        blackPawn(i);
      }
      else if(board[i]=='n'||board[i]=='N'){
        knight(i);
      }
      else if(board[i]=='q'||board[i]=='Q'){
        queen(i);
      }
      else if(board[i]=='k'||board[i]=='K'){
        king(i);
      }
      else{}
    }
    int cnt = 0;
    for(char c: board){
      if(c=='-')cnt++;
    }
    // printf("\n");
    // printBoard();
    printf("%d\n",cnt);
  }
  return 0;
}
