#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {

	// ios::sync_with_stdio(false);
	// cin.tie(nullptr);

	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);

  int n, m, inp;
  cin >> n >> m;
  multiset<int> t;
  vector<bool> sold(n, false);
  vector<int> c(m);

  for(int i=0; i<n; i++) {
    cin >> inp;
    t.insert(inp);
  }

  for(int i=0; i<m; i++) {
    cin >> c[i];
  }

  set<int>::iterator it;
  for(int x: c) {
    set<int>::iterator ub = t.upper_bound(x);

    if(ub == t.begin()) {
      cout << "-1\n";
    } else {
      ub--;
      cout << *ub << "\n";
      t.erase(ub);
    }
  }

}