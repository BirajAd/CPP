#include <iostream>
#include <stdio.h>
#include <vector>
#define ll long long

using namespace std;
// Your task is to divide the numbers 1,2,…,n
// into two sets of equal sum.

// Input:
//    The only input line contains an integer n
// Output
//    Print "YES", if the division is possible, and "NO" otherwise.
//    After this, if the division is possible, print an example of how 
//    to create the sets. First, print the number of elements in the first 
//    set followed by the elements themselves in a separate line, and then, 
//    print the second set in a similar way.

// 1 2 3 4 5 6 7 8
// keep coming down from n until the sum is great enough that adding one more number 
// from the remaining set is enough

int main() {
  ll int n;
  cin >> n;
  ll int sum = n*(n+1)/2;
  if(sum%2!=0) {
    cout << "NO\n";
  } else {
    // this is the sum one set needs to have
    cout << "YES\n";
    ll int requiredSum = sum/2;
    vector<int> a = {};
    ll int total = 0;
    // keep coming down from top until you find a number that if added equals to required sum
    while(requiredSum-total >= n) {
      total += n;
      a.push_back(n);
      n--;
    }
    // cout << requiredSum-total << " " << n << "\n";
    // ll int aSum = 0;
    // ll int bSum = 0;
    ll int required = requiredSum-total;
    (required > 0) ? cout << a.size()+1 << "\n" : cout << a.size() << "\n";
    for(auto x: a) {
      // aSum += x;
      cout << x << " ";
    }
    if(required > 0) cout << required << "\n";
    // aSum += required;
    (required > 0) ? cout << n-1 << "\n" : cout << n << "\n";
    
    for(ll int i=1; i<=n; i++) {
      if (i != required) {
        // bSum += i;
        cout << i << " ";
      }
    }
    cout << "\n";
    // cout << "A: " << aSum << " B: " << bSum << "\n";
  }
  return 0;
}
