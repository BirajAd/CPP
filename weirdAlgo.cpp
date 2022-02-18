#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int simulateWeird(long long int &n) {
    cout << n << " ";
    while(n > 1) {
        if(n & 1) {
            n = (n * 3) + 1;
        } else {
            n >>= 1;
        }
        cout << n << " ";
    }
    cout << "\n";
    return 0;
}

int main() {
    long long int n;
    cin >> n;
    simulateWeird(n);
}