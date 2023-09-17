#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Node {
    int val;
    Node* next;
    Node(): val(0), next(nullptr) {}
    Node(int x): val(x), next(nullptr) {}
};

Node* convertArrayToLinkedList(vector<int> aList)
{
    Node* root = new Node(aList[0]);
    Node* ans = root;
    for(int i=1; i<aList.size(); i++)
    {
        root->next = new Node(aList[i]);
        root = root->next;
        cout << root->val << endl;
    }
   
    // keep 1, go to 2, keep 2, go to 3, reverse pointer of two,

    return ans;
}

void printLinkedList(Node* a)
{
    while(a != NULL){
        cout << a->val << ", ";
        a = a->next;
    };
}

Node* reverseLinkedList(Node* head) {
    // null->1->2->3->4->5->null

    Node* current = head;
    Node *prev = NULL, *next = NULL;
 
    while (current != NULL) {
        // Store next
        next = current->next;

        // Reverse current node's pointer
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

int main()
{
    vector<int> a = {1,2,3,4,5,6,7};
    Node* ll = convertArrayToLinkedList(a);
    // Node* rl = reverseLinkedList(ll);
    printLinkedList(ll);
}