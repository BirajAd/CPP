#include <iostream>
#include <string>
#include <queue>
#include <stdio.h>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void printQueue(queue<TreeNode*> q)
{

}


struct TreeNode* invertTree(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    if(root == NULL){
        cout << "null";
    } else {
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left != NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
            TreeNode* temp = curr->left;
            curr->left = curr->right;
            curr->right = temp;
        };
    }
    return root;

};

void orderTraversal(TreeNode* n)
{
    queue<TreeNode*> q;
    TreeNode* root = n;
    if(root == NULL)
    {
        cout << "root is null" << endl;
    }
    q.push(root);
    while(!q.empty())
    {
        TreeNode* curr = q.front();
        q.pop();
        cout << curr->val << ",";
        if(curr->left != NULL) q.push(curr->left);
        if(curr->right != NULL) q.push(curr->right);
    }
}

int main()
{
    TreeNode* a = new TreeNode(9);
    a->left = new TreeNode(4);
    a->right = new TreeNode(15);
    a->left->left = new TreeNode(2);
    a->left->right = new TreeNode(5);
    a->left->right->left = new TreeNode(1);
    a->left->right->right = new TreeNode(3);
    a->right->left = new TreeNode(10);
    a->right->right = new TreeNode(18);
    a->right->right->right = new TreeNode(20);
    // orderTraversal(a);
    TreeNode* b = invertTree(a);
    orderTraversal(b);

    return 0;
};