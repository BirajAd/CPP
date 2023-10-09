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
    cout << "\n";
}


//{5,3,46,7,9,8,7,2}
TreeNode* arrayToBinary(vector<int> aVector)
{
    TreeNode* root = new TreeNode(aVector[0]);
    queue<TreeNode*> q;
    q.push(root);
    for(int i=0; i<aVector.size(); i++)
    {
        TreeNode* curr = q.front(); q.pop();
        if(2*i+1 < aVector.size()) {
            curr->left = new TreeNode(aVector[2*i+1]);
            q.push(curr->left);
        } else {
            // no need to go further
            break;
        }
        if(2*i+2 < aVector.size()) {
            curr->right = new TreeNode(aVector[2*i+2]);
            q.push(curr->right);
        } else {
            // no need to go further
            break;
        }
    }
    return root;
}

int main()
{
    TreeNode* a = new TreeNode(9);
    a->left = new TreeNode(4);
    a->right = new TreeNode(15);
    // orderTraversal(a);
    // TreeNode* b = invertTree(a);
    vector<int> vect = {9,4,15,2,5,1,3,10,18,20};
    TreeNode* result = arrayToBinary(vect);
    orderTraversal(result);
    // cout << result->left->right->val << endl;

    return 0;
};