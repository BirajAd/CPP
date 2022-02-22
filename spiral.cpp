#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    long long int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        long long int x, y;
        cin >> x;
        cin >> y;
        if(x ^ y) {
            long long int maxm = max(x, y);
            cout << (maxm * maxm) - min(x, y) + 1 << "\n";
        } else {
            cout << x * (y - 1) + 1 << "\n";
        }
    }
}