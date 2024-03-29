#include <iostream>
#include <string>
#include <queue>
#include <stdio.h>

using namespace std;

struct Node {
  int val;
  Node *left;
  Node *right;
  Node() : val(0), left(nullptr), right(nullptr) {}
  Node(int x) : val(x), left(nullptr), right(nullptr) {}
  Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

void orderTraversal(Node *n) {
  queue<Node *> q;
  Node *root = n;
  if (root == NULL)
  {
    cout << "root is null" << endl;
  }
  q.push(root);
  while (!q.empty())
  {
    Node *curr = q.front();
    q.pop();
    cout << curr->val << " ";
    if (curr->left != NULL)
      q.push(curr->left);
    if (curr->right != NULL)
      q.push(curr->right);
  }
  cout << "\n";
}

//{5,3,46,7,9,8,7,2}
Node *arrayToBinary(vector<int> &aVector) {
  Node *root = new Node(aVector[0]);
  int len = aVector.size();
  queue<Node *> q;
  q.push(root);
  for (int i = 0; i < len; i++)
  {
    Node *curr = q.front();
    q.pop();
    if (2 * i + 1 < len)
    {
      curr->left = new Node(aVector[2 * i + 1]);
      q.push(curr->left);
    }
    else
    {
      // no need to go further
      break;
    }
    if (2 * i + 2 < len)
    {
      curr->right = new Node(aVector[2 * i + 2]);
      q.push(curr->right);
    }
    else
    {
      // no need to go further
      break;
    }
  }
  return root;
}

int height(Node *node) {

  //   if(node != NULL) cout << node->val << "\n";
  if (node == NULL)
    return -1;

  int lHeight = height(node->left);
  int rHeight = height(node->right);

  //   cout << "root: " << node->val << " |=> " << lHeight << " | " << rHeight << "\n";

  return max(lHeight, rHeight) + 1;
}

void inOrderTraversal(Node* n, vector<Node*> &v) {
  if(n == NULL) {
    return;
  }
  inOrderTraversal(n->left, v);
  // cout << n->val << " ";
  v.push_back(n);
  inOrderTraversal(n->right, v);
}