#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>

#define ll long long

using namespace std;

int main() {
  ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("input.in", "r", stdin);
	freopen("output.out", "w", stdout);
  int n;
  cin >> n;
  vector<ll int> v(n);
  ll int sum = 0;
  ll int x;
  for(int i=0; i<n; i++) {
    cin >> x;
    v[i] = x;
    sum += x;
  }
  // sort(v.begin(), v.end());
  ll int avg = round((double)sum/n);
  cout << avg << "\n";
  ll int ans = 0;
  for(auto x: v) {
    ans += abs(avg-x);
  }
  cout << ans << "\n";
}