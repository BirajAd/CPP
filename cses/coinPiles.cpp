#include <iostream>

#define ll long long

using namespace std;

int main() {
  ll int n;
  cin >> n;
  cout << "\n";
  while(n--) {
    ll int a, b;
    cin >> a >> b;
    if((a == 0 && b != 0) || (b == 0 && a != 0)) {
      cout << "NO\n";
      continue;
    }
    // 2x + 1x = (a+b) => x = (a+b)/3
    ll int sum = a+b;
    if(sum%3 == 0) {
      // steps => (a+b)/2
      // if small number is smaller than necessary steps
      // it's NO
      if(min(a, b) >= sum/3) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    } else {
      cout << "NO\n";
    }
  }
}