#include <iostream>

#define MOD 1000000007
#define ll long long

using namespace std;

// 3^4 % 10^9+7

ll int power(ll int num, ll int power) {
  if(power == 0) {
    return 1;
  };
  if(num == 0) {
    return 0;
  }
  ll int sum = 1;
  while(power--) {
    sum *= num;
  }
  return sum;
}

int main() {
  ll int n, o;
  cin >> n >> o;
  ll int ans = power(n, o);
  cout << "ANS: " << ans << "\n";
  if(ans < MOD) {
    return ans;
  }
  cout << ans % MOD << "\n";
}