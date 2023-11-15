#include <iostream>
#include <stdio.h>
#include <vector>
#include <util.h>

using namespace std;

int main() {
  vector<int> v = {5,7,9,10,12,13,15};
  Node* a = new Node(5);
  Node* curr = a;
  for(int i=1; i<v.size(); i++) {
    Node* nN = new Node(v[i]);
    curr->right = nN;
    curr = nN;
  }
  orderTraversal(a);
  cout << "\n";
  vector<Node*> inorder = {};
  inOrderTraversal(a, inorder);
  for(auto x: inorder) {
    cout << x->val << " ";
  }
  cout << "\n";
}