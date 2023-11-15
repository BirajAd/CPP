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

  int n;
  cin >> n;
  vector<int> v(n);
  ll int sum = 0;
  ll int ans = INT_MIN;
  for(int i=0; i<n; i++) {
    cin >> v[i];
    if(v[i]+sum < v[i]) {
      sum = v[i];
    } else {
      sum += v[i];
    }
    ans = max(sum, ans);
  }
  
  cout << ans << "\n";
}