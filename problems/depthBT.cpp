#include <iostream>
#include <util.h>
#include <stack>
#include <vector>

int ans = 0;

void orderRead(Node *node)
{
  cout << node->val << " ";
  if (node->right)
  {
    orderRead(node->right);
  }
  if (node->left)
  {
    orderRead(node->left);
  }
};

int findDepth(Node *root)
{          
  //       
  if (root == NULL)
  {
    return 0;
  }

  int lDepth = findDepth(root->left);
  int rDepth = findDepth(root->right);

  return max(lDepth, rDepth) + 1;
}

int depthWithStack(Node* root) {
  stack<pair<Node*, int>> st;
  int maxDepth = 0;
  st.push({ root, 1 });

  while(!st.empty()) {
    pair<Node*, int> popped = st.top();
    maxDepth = max(maxDepth, popped.second);
    st.pop();

    if(popped.first->left) {
      pair<Node*, int> next = { popped.first->left, popped.second+1 };
      st.push(next);
    }
    if(popped.first->right) {
      pair<Node*, int> next = { popped.first->right, popped.second+1 };
      st.push(next);
    }
  }

  return maxDepth;

};

int main() {
  Node* a = arrayToBinary({2, 3, 4, 5, 6, 7, 8});
  // int ab[] = { 1, 2, 3, NULL };
  // cout << depthWithStack(a) << "\n";
  // orderTraversal(a);
  cout << height(a) << "\n";
}