#include <iostream>
#include <vector>
#include <set>

using namespace std;

struct cmp {
  bool operator()(const pair<int, int> &a, const pair<int, int> &b) const { 
    return a.second < b.second;
  }
};

int main() {

  // ios::sync_with_stdio(false);
	// cin.tie(nullptr);

	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);

  int x;
  cin >> x;
  multiset<int> lT;
  multiset<pair<int, int>, cmp> v;
  pair<int, int> a;
  int b, c;
  for(int i=0; i<x; i++) {
    cin >> b >> c;
    a = {b, c};
    lT.insert(c);
    v.insert(a);
  }

  // cout << "\n";
  // for(auto x: lT) {
  //   cout << x << "\n"; // x.first << " " << x.second << "\n";
  // }
  // cout << "\n";

  auto firstC = v.begin();
  auto mL = lT.begin(); // one who leaved last so far
  int Max = 1;
  int actualMax = 1;
  pair<int, int> start = *firstC;
  int minLeave = start.second, maxLeave = start.second;
  cout << start.first << " " << start.second << "\n";
  firstC++;
  mL++;
  while(firstC != v.end()) {
    auto curr = *firstC;
    cout << curr.first << " " << curr.second << "\n";
    maxLeave = curr.second;
    firstC++;
    if(curr.first > maxLeave) {
      // cout << "trigged\n";
      Max = 0;
      minLeave = curr.second;
      maxLeave = curr.second;
    }
    if(curr.first <= minLeave) {
      Max++;
    } else {
      Max--;
      // cout << "now it's " << *mL << "\n";
      minLeave = *mL;
      mL++;
    }
    actualMax = max(Max, actualMax);
    Max = actualMax;
  }
  cout << actualMax << "\n";
}