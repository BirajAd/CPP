#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    long long int a;
    cin >> a;
    long long int zeros = 0;
    for(int i=5; a/i>=1; i*=5) {
        zeros += (a/i);
    }
    cout << zeros << "\n";
}