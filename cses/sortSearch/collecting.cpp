#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {

  // ios::sync_with_stdio(false);
	// cin.tie(nullptr);

	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);

  int n;
  cin >> n;
  map<int, int> mp;

  int a;
  for(int i=0; i<n; i++) {
    cin >> a;
    mp.insert({a, i});
  }

  int ans = 1;
  for(auto itr=mp.begin(); itr != mp.end(); ++itr) {
    if(itr->first != n) {
      if(mp[itr->first+1] < mp[itr->first]) ans++;
    }
  }
  cout << ans << "\n";
}