#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>

#define ll long long

using namespace std;

int main() {

  // ios::sync_with_stdio(false);
	// cin.tie(nullptr);

	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);

  ll int n;
  cin >> n;
  vector<ll int> v(n);
  for(ll int &i: v) {
    cin >> i;
  }
  
  sort(v.begin(), v.end());

  ll int sum = v[0];
  if(sum > 1) {
    cout << 1 << "\n";
    return 0;
  }
  // for(auto const &i: v) {
  //   cout << i << " ";
  // }
  // cout << "\n";
  for(ll int i=1; i<n; i++) {
    if(v[i] - sum > 1) {
      // cout << "here: " << i << " " << v[i] << "\n";
      cout << sum + 1 << "\n";
      return 0;
    }
    sum += v[i];
  }
  cout << sum + 1 << "\n";
}