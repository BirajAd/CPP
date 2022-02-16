#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int simulateWeird(int &n) {
    cout << n << " ";
    while(n != 1) {
        if(remainder(n, 2) == 0) {
            n = n/2;
            cout << n << " ";
        } else {
            n = (n*3)+1;
            cout << n << " ";
        }
    }
    cout << "\n";
    return 0;
}

int main() {
    int n;
    cin >> n;
    simulateWeird(n);
}