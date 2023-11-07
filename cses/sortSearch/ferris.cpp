#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("input.in", "r", stdin);
	freopen("output.out", "w", stdout);

  int n, x;
  cin >> n >> x;
  int ch[n];
  for(int i=0; i<n; i++) {
    cin >> ch[i];
  }

  sort(ch, ch+n);

  // for(auto x: ch) {
  //   cout << x << " ";
  // }
  // cout << "\n";

  int ans = 0;
  for(int i=0; i<n; i++) {
      // for(auto x: ch) {
      //   cout << x << " ";
      // }
      // cout << "\n";
    if(ch[i] == -1) {
      continue; // picked up already
    }
    if(ch[i] == x || i == n-1) {
      ans++;
      continue;
    }
    int sum = ch[i];
    int lastIndex = i;
    for(int j=i+1; j<n ;j++) {
      // cout << "cool" << "\n";
      if(ch[j] != -1) {
        if(sum == x) {
          // cout << sum << "\n";
          ans++;
          ch[i] = -1;
          break;
        } else if(sum+ch[j] < x) {
          // cout << "comp: " << sum << " and " << ch[j] << "\n";
          lastIndex = j;
        } else if(sum+ch[j] == x) {
          ans++;
          // cout << ch[i] << " + " << ch[j] << "\n";
          ch[i] =-1;
          ch[j] =-1;
          break;
        } else if(sum+ch[j] > x) {
          ans++;
          // cout << ch[i] << " big " << ch[j] << "\n";
          ch[i] = -1;
          break;
        }
      }

      if(j == n-1) {
        ans++;
        // cout << ch[i] << " last " << ch[lastIndex] << "\n";
        ch[i] =-1;
        ch[lastIndex] =-1;
        break;
      }
    }

  }

  cout << ans << "\n";

}