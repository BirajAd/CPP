#include <stdio.h>
#include <iostream>
#include <cmath>
#define MOD 1000000007

using namespace std;

int main() {
    long long int x, answer=1;
    cin >> x;
    while(x != 0) {
        answer *= 2;
        answer %= MOD;
        --x;
    }
    cout << answer << "\n";
}