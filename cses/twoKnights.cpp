#include <iostream>
#define ll long long

using namespace std;

ll int combination(ll int n, ll int r) {
  // n!/r!(n-r)!
  ll int range = n-r;
  ll int sum = 1;
  ll int rSum = 1;
  for(ll int i=n; i>range; i--) {
    sum *= i;
  }
  
  for(ll int i=1; i<=r; i++) {
    rSum *= i;
  }
  return sum/rSum;
}

int main() {
  // Explanation:
  // 2*3 box count = (n-2)*(n-1)
  // when counting vertically => n-2
  // when counting horizontally => n-1

  // 3*2 box count = (n-2)*(n-1)
  // when counting vertically => n-1
  // when counting horizontally => n-2

  // adding them together
  // = (n-1)(n-2) + (n-1)(n-2)
  // = 2*(n-1)(n-2)

  ll int a;
  cin >> a;
  for(ll int n=1; n<=a; n++) {
    ll int space = n*n;
    // n^2 cells Combination 2 knights
    ll int c = combination(space, 2);
    if(n < 3) {
      cout << c << "\n";
      continue;
    }
    // (total number of 2*3 boxes + total number of 3*2 boxes) * 2 invalid moves in each box
    ll int invalids = (n-1)*(n-2)*2*2;
    cout << c-invalids << "\n";
  }
}