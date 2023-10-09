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

void orderTraversal(Node* n)
{
    queue<Node*> q;
    Node* root = n;
    if(root == NULL)
    {
        cout << "root is null" << endl;
    }
    q.push(root);
    while(!q.empty())
    {
        Node* curr = q.front();
        q.pop();
        cout << curr->val << " ";
        if(curr->left != NULL) q.push(curr->left);
        if(curr->right != NULL) q.push(curr->right);
    }
    cout << "\n";
}

//{5,3,46,7,9,8,7,2}
Node* arrayToBinary(vector<int> aVector)
{
    Node* root = new Node(aVector[0]);
    queue<Node*> q;
    q.push(root);
    for(int i=0; i<aVector.size(); i++)
    {
        Node* curr = q.front(); q.pop();
        if(2*i+1 < aVector.size()) {
            curr->left = new Node(aVector[2*i+1]);
            q.push(curr->left);
        } else {
            // no need to go further
            break;
        }
        if(2*i+2 < aVector.size()) {
            curr->right = new Node(aVector[2*i+2]);
            q.push(curr->right);
        } else {
            // no need to go further
            break;
        }
    }
    return root;
}