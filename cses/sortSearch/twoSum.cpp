#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, s;
  cin >> n >> s;
  vector<pair<int, int>> v(n);
  int a;
  for(int i=0; i<n; i++) {
    cin >> a;
    v[i] = {a, i};
  }

  sort(v.begin(), v.end());

  int start = 0, end = n-1;

  int sum = 0;
  while(start < end) {
    sum = v[start].first + v[end].first;
    if(sum == s) {
      cout << v[start].second + 1 << " " << v[end].second + 1 << "\n";
      return 0;
    } else if (sum > s) {
      end--;
    } else if (sum < s) {
      start++;
    }
  }
  cout << "IMPOSSIBLE\n";
}