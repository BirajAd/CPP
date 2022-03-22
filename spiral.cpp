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
        if(x > y) {
            if(x%2!=0){
                long long int maxm = max(x, y);
                cout << maxm * maxm - min(x, y) - 1 << "\n";
            } else {
                long long int maxm = max(x, y);
                cout << ((maxm-1) * (maxm-1)) + min(x, y) << "\n";
            }
        } else {
            long long int maxm = max(x, y);
            cout << maxm * maxm - min(x, y) + 1 << "\n";
        }
    }
}