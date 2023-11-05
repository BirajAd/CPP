#include <iostream>
#include <set>

using namespace std;

int main() {
  int n;
  cin >> n;
  int nums[n];
  set<int> dups;

  for(int i=0; i<n; i++) {
    cin >> nums[i];
    dups.insert(nums[i]);
  }

  cout << dups.size() << "\n";
}