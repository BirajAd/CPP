#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Point {
  int x, y;
  Point(int a, int b): x(a), y(b) {}
  void print() {
    cout << "x: " << x << " y: " << y << "\n";
  }

  double operator-(Point const& p) {
    cout << x << " - " << p.x << " , " << y << " - " << p.y << "\n";
    return sqrt(pow((x - p.x), 2) - pow((y - p.y), 2));
  }

  Point operator-(pair<int, int> const& p) {
    cout << x << " - " << p.first << " , " << y << " - " << p.second << "\n";
    return Point((x - p.first), (y - p.second));
  }
};

struct cmp {
  bool operator()(const Point &a, const Point &b) const { return a.x < b.x; }
};

int main() {

  ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("input.in", "r", stdin);
	freopen("output.out", "w", stdout);
  // int a = 2;
  // multiset<Point, cmp> v;
  // while(a--) {
  //   int x, y;
  //   cin >> x >> y;
  //   v.insert({x, y});
  // }

  // Point p1 = Point(2, 4);
  // Point p2 = Point(4, 5);
  // pair<int, int> eps = { 0, 3 };
  // Point p3 = p2-eps;
  // p3.print();
  // p.print();
  // set<Point>::iterator o;
  // o = v.upper_bound(p);

  // if(o != v.end()) {
  //   Point xy = *o;
  //   xy.print();
  // }
  int n;
  cin >> n;
  vector<pair<int, int>> v;
  for(int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    v.push_back({a, 1});
    v.push_back({b, -1});
  }
  sort(v.begin(), v.end());
  int sum = 0, MAX = 0;
  for(auto x: v) {
    // cout << x.first << " " << x.second << "\n";
    sum += x.second;
    MAX = max(sum, MAX);
  }
  cout << MAX << "\n";

}
