#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	// ios::sync_with_stdio(false);
	// cin.tie(nullptr);

	// freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);

  int n, m, k;
  cin >> n >> m >> k;
  int applicants[n];
  int apartments[m];
  for(int i=0; i<n; i++) {
    cin >> applicants[i];
  }

  for(int i=0; i<m; i++) {
    cin >> apartments[i];
  }

  sort(applicants, applicants+n);
  sort(apartments, apartments+m);

  int ans = 0;

// 4 3 5
// 35 60 60 80
// 30 60 75 55

  int lastOne = 0;
  for(int i=0; i<m; i++) { // apartments
    for(int j=lastOne; j<n; j++) { // applicants
      if(applicants[j] > 0 && apartments[i] <= applicants[j]+k && apartments[i] >= applicants[j]-k) {
        ans++;
        lastOne++;
        applicants[j] = -1; // mark as assigned
        break;
      }

      if(applicants[j] < apartments[i]-k) {
        lastOne = j;
      }

      if(apartments[i] < applicants[j]+k) {
        break;
      }
    }
  }
  cout << ans << "\n";
}