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

class Solution {
    public:
        struct TreeNode* invertTree(TreeNode* root) {
            queue<TreeNode> q;
            q.push(*root);
            if(root == NULL){
                cout << "null";
                return NULL;
            } else {
                cout << root->val << endl;
                return &q.front();
            }
            // while(!q.empty())
            // {
            //     TreeNode *head = q.pop();
            //     q.push(head.left);
            //     q.push(head.right);
            //     TreeNode temp = head.left;
            //     head.left = head.right;
            //     head.right = temp;
            // }
        };
        int main()
        {
            TreeNode a = TreeNode();
            invertTree(&a);
            return 0;
        };
};