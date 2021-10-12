#include<bits/stdc++.h>

using namespace std;

struct Node {
  int key;
  int maxKey;
  int minKey;
  Node* left;
  Node* right;
  Node* parent;
  Node(int key):key(key),maxKey(key),minKey(key),left(nullptr),right(nullptr),parent(nullptr){}
  void traverseTree () {
    cout << this->key << "-";
    if (this->left) {
      this->left->traverseTree();
    }
    if (this->right) {
      this->right->traverseTree();
    }
  }
  bool isBST(){
    cout << "checking for node " << this->key << endl;
    if (this->left && (!this->left->isBST() || this->left->maxKey >= this->key)) {
        cout << this->key << "isNotBST" << endl;
        return false;
    }
    if (this->right && (!this->right->isBST() || this->right->minKey < this->key)) {
        cout << this->key << "isNotBST" << endl;
        return false;
    }
    cout << this->key << "isBST" << endl;
    if (this->left) {
      this->minKey = min(minKey,this->left->minKey);
    }
    if (this->right) {
      this->maxKey = max(maxKey,this->right->maxKey);
    }
    return true;
  }

  void printRange(const int& a,const int& b) {
    if (this->key >= a && this->key <= b) {
      cout << this->key << "-";
    }
    if (this->key > a && this->left) {
      this->left->printRange(a,b);
    }
    if (this->key <= b && this->right) {
      this->right->printRange(a,b);
    }
    return;
  } 

  void printInNonAcendingOrder() {
    if (this->right) {
      this->right->printInNonAcendingOrder();
    }
    cout << this->key <<" ";
    if (this->left) {
      this->left->printInNonAcendingOrder();
    }
  }
};

int main() {
  Node* n1 = new Node(1);
  Node* n2 = new Node(2);
  Node* n3 = new Node(3);
  Node* n4 = new Node(4);
  Node* n5 = new Node(5);
  Node* n6 = new Node(6);
  Node* n7 = new Node(7);
  Node* n8 = new Node(8);
  Node* n9 = new Node(9);
  n6->left = n3;
  n6->right = n8;
  n3->left = n2;
  n3->right = n4;
  n2->left = n1;
  n4->right = n5;
  n8->left = n7;
  n8->right = n9;
  n6->traverseTree();
  cout << endl;
  cout << "is BST? = " << n6->isBST() << endl;
  int a = 3;
  int b = 8;
  cout << "Printing range " << a << "-" << b << ": ";
  n6->printRange(a,b);
  cout << endl;
  cout << "Printing in non-acending order " << endl;
  n6->printInNonAcendingOrder();
  cout << endl;
  return 0;
}
