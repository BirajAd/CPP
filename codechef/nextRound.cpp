#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    int ans = 0;
    cin >> a >> b;
    vector<int> f(a);
    b--;
    for(int i=0; i<a; i++) {
        cin >> f[i];
        if(i >= b) {
            if(f[i] >= f[b] && f[i] > 0) ans++;
        }
    }

    for(int i=0; i<b; i++) {
        if(f[i] >= f[b] && f[i] > 0) ans++;
    }
    cout << ans << "\n";
}