#include <stdio.h>
#include <string.h>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int findNthLargest(vector<int> a_list, int n)
{
    std::priority_queue<int> pq;
    for(int i: a_list)
    {
        if(pq.empty()){
            pq.push(i);
        } 
        else if (pq.top() != i) //avoid duplicates
        {
            pq.push(i);
        }
      }

    for(int i=0; i<n; i++)
    {
        pq.pop();
    }

    cout << pq.top() << endl;
    return pq.top();

}

int main(){
    vector<int> a = {1,3, 9, 4, 5, 8, 9};
    findNthLargest(a, 2);
}