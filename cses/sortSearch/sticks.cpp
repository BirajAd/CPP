#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define ll long long

using namespace std;

int main() {

  // ios::sync_with_stdio(false);
	// cin.tie(nullptr);

	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);

  int n;
  cin >> n;
  vector<ll int> v(n);
  for(ll int &i: v) {
    cin >> i;
  }
  sort(v.begin(), v.end());

  ll int mdn = v[n/2];

  ll int ans = 0;
  for(auto x: v) {
    ans += abs(mdn-x);
  }
  cout << ans << "\n";
}