#include <iostream>
#include <vector>
#include <set>

using namespace std;

struct cmp {
  bool operator()(const pair<int, int> &a, const pair<int, int> &b) const { 
    return a.first < b.first;
  }
};

int main() {

  // ios::sync_with_stdio(false);
	// cin.tie(nullptr);

	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);

  int x;
  cin >> x;
  multiset<pair<int, int>, cmp> v;
  pair<int, int> a;
  int b, c;
  for(int i=0; i<x; i++) {
    cin >> b >> c;
    a = {b, c};
    v.insert(a);
  }

  // cout << "\n";
  // for(auto x: lT) {
  //   cout << x << "\n"; // x.first << " " << x.second << "\n";
  // }
  // cout << "\n";

  auto firstC = v.begin();
  int Max = 1;
  pair<int, int> start = *firstC;
  int lastEnd = start.second;

  // cout << "\n";

  while(firstC != v.end()) {
    pair<int, int> curr = *firstC;
    firstC++;
    if(curr.first >= lastEnd) {
      lastEnd = curr.second;
      Max++;
      // cout << curr.first << " " << curr.second << " max: " << Max << "\n";
    }
    if(curr.second < lastEnd) {
      // better one
      lastEnd = curr.second;
      // cout << "better: " << curr.first << " " << curr.second << " max: " << Max << "\n";
    }
  }

  cout << Max << "\n";
}