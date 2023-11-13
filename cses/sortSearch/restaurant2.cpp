#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {

  // ios::sync_with_stdio(false);
	// cin.tie(nullptr);

	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);

  int x;
  cin >> x;
  vector<pair<int, int>> v;
  int b, c;
  for(int i=0; i<x; i++) {
    cin >> b >> c;
    v.push_back({ b, 1 });
    v.push_back({ c, -1 });
  }

  sort(v.begin(), v.end());

  int sum = 0, Max = 0;
  for(auto x: v) {
    cout << x.first << " " << x.second << "\n";
    sum += x.second;
    Max = max(sum, Max);
  }
  cout << Max << "\n";
}