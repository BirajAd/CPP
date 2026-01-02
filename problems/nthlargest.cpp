#include <bits/stdc++.h>
using namespace std;

int findNthLargest(vector<int> a_list, int n) {
  // find nth largest element from a given list
  std::priority_queue<int> pq;
  for(int i: a_list) {
    if(pq.empty()){
      pq.push(i);
    } 
    else if (pq.top() != i) {
      //avoid duplicates 
      pq.push(i);
    }
  }

  n = n-1;
  while(n--) {
    pq.pop();
  }

  cout << pq.top() << endl;
  return pq.top();
}

int main(){
    vector<int> a = {1, 3, 9, 4, 5, 8, 9};
    cout << sqrt(4) << "\n";
    findNthLargest(a, 2);
}
