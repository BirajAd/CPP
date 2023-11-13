#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  // ios::sync_with_stdio(false);
	// cin.tie(nullptr);

	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);

  int x;
  cin >> x;
  vector<pair<int, int>> v(x);
  pair<int, int> a;
  int b, c;
  for(int i=0; i<x; i++) {
    cin >> b >> c;
    a = {b, c};
    v[i] = a;
  }

  auto firstC = v[0];
  int Max = 1;
  int lastEnd = firstC.second;

  // cout << "\n";
  sort(v.begin(), v.end());

  for(int i=0; i<x; i++) {
    pair<int, int> curr = v[i];
    if(curr.first >= lastEnd) {
      lastEnd = curr.second;
      Max++;
    }
    if(curr.second < lastEnd) {
      // better one
      lastEnd = curr.second;
    }
  }

  cout << Max << "\n";
}