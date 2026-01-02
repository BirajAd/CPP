#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int sum = 0; int ans = 0;
    vector<int> l = {};
    vector<int> all(n);
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        if(a == 4) {
            all[i] = -1;
            ans++;
        } else {
            all[i] = a;
            l.push_back(4-a);
        }
    }
    sort(l.begin(), l.end());
    int s = l.size();
    for(int i: all) {
        if(i == -1) continue;
        for(int j=0; j<s; j++) {
            if(l[j] == 0) continue;
            if(l[j] >= i) {
               l[j] = l[j]-i; 
            }
        }
    }
    (sum%4==0) ? cout << sum/4 : cout << (sum/4+1);
}