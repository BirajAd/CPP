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


void invertTree(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    if(root == NULL){
        cout << "null";
    } else {
        while(!q.empty())
        {
            if(root->left != NULL) q.push(root->left);
            if(root->right != NULL) q.push(root->right); 
            TreeNode* temp = root->left;
            root->left = root->right;
            root->right = temp;
            cout << root->left->val << " and " << root->right->val << endl;
            q.pop();
            root = q.front();
            cout<< (root->right!=NULL ? root->right->val : -999) << endl;
            cout << "empty: " << q.front()->val << endl;
        };
        cout << "end here" << endl;
    }

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
        if(curr->left != NULL)
        {
            q.push(curr->left);
        }
        if(curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    TreeNode* a = new TreeNode(9);
    a->left = new TreeNode(4);
    a->right = new TreeNode(15);
    a->left->left = new TreeNode(2);
    a->left->right = new TreeNode(5);
    a->right->left = new TreeNode(10);
    a->right->right = new TreeNode(18);
    orderTraversal(a);
    cout << endl;
    invertTree(a);
    cout << a->val << "ended";
    cout << "done";

    return 0;
};