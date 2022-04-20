#include <iostream>

using namespace std;

int main() {
    int t, n, m, k;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> n >> m >> k;
        string ans = (((double)n/k) <= m) ? "Yes\n" : "No\n";
        cout << ans;
    }
}