#include <iostream>
#define ll long long

using namespace std;

// 1 2 3 4 5 6 7
// 7 4 6 3 5 2 1
// 1 2 3 4 5 6
// 6 3 5 2 4 1

int main() {
  ll int n;
  cin >> n;
  if(n == 1) {
    cout << n;
    return 0;
  }
  if(n <= 3) {
    cout << "NO SOLUTION\n";
    return 0;
  }
  ll int start = 4;
  (n%4==0) ? start = 3 : start = 4; //skip 1 if not divisible by 4
  for(ll int i=start; i<=n; i+=4) {
    cout << i << " " << i-2 << " ";
    cout << i+1 << " " << i-1 << " ";
  }
  // cout << "\n";
  ll int remaining = n%4;
  // cout << remaining << "\n";
  if(remaining > 0) {
    if(remaining == 1) {
      cout << 1 << "\n";
    } else if(remaining == 2) {
      cout << n << " " << 1 << " ";
    } else if(remaining == 3) {
      cout << n-1 << " " << 1 << " " << n;
    }
  }
  cout << "\n";
}