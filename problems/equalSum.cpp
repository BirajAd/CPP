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
// this is a two pointer problem
// sum(first+last) if result < (sum/2) -> --lastPointer and repeat
// if result > (sum/2) -> ++firstPointer and repeat until you get sum/2

int main() {
  ll int n;
  cin >> n;
  ll int sum = n*(n+1)/2;
  if(sum%2!=0) {
    cout << "NO";
  } else {
    // this is the sum one set needs to have
    ll int requiredSum = sum/2;
    vector<int> a = { 1 };
    ll int total = 1;
    ll int first = 1;
    ll int last = n;
    while(requiredSum >= total) {
      if(total == requiredSum) {
        break;
      }
      if(total+last <= requiredSum) {
        total += last;
        a.push_back(last);
        last--;
      } else {
        total += first; 
        if(first != 1) a.push_back(first);
        first++;
      }
    }
    cout << "YES\n" << a.size() << "\n";
    for(auto x: a) {
      cout << x << " ";
    }
    cout << "\n" << n-a.size() << "\n";
    // if(first == last) { // then there is only one number
    //   cout << first << "\n";
    // }
    if(first == 1) first += 1;
    for(ll int i=first; i<=last; i++) {
      cout << i << " ";
    }
    cout << "\n";
    cout << "\n" << first << "<====>" << last << "\n";
  }
  return 0;
}
