#include <cstdio>
#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;

int main() {

	// ios::sync_with_stdio(false);
	// cin.tie(nullptr);

	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);

  ll n, x;
  cin >> n >> x;
  ll ch[n];
  for(ll i=0; i<n; i++) {
    cin >> ch[i];
  }

  sort(ch, ch+n);

  // for(auto x: ch) {
  //   cout << x << " ";
  // }
  // cout << "\n";

  ll ans = 0;
  for(ll i=0; i<n; i++) {
    if(ch[i] == -1) {
      continue; // picked up already
    }
    if(ch[i] == x || i == n-1) {
      ans++;
      continue;
    }
    ll sum = ch[i];
    ll lastIndex = n-1;
    for(ll j=lastIndex; j>=i ;j--) {
      if(i == j) {
        // cout << ch[j] << " only\n";
        ans++;
        continue;
      }
      ll sc = ch[j];
      if(sc != -1) {
        lastIndex = j-1;
        if(sum+sc > x) {
          // cout << "comp: " << sum << " and " << ch[j] << "\n";
          continue;
        } else if(sum+sc == x) {
          ans++;
          // cout << ch[i] << " + " << ch[j] << "\n";
          ch[j] =-1;
          break;
        } else if(sum+ch[j] < x) {
          ans++;
          // cout << ch[i] << " big " << ch[j] << "\n";
          ch[j] = -1;
          break;
        }
      }

    }

  }

  cout << ans << "\n";

}