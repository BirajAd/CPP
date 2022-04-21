#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c;
    cin >> a;
    while(a--)
    {
        int maxm = 0;
        cin >> b >> c;
        if(b >= c) {
            cout << c << "\n";
        } else {
            cout << b-abs(c-b) << "\n";
        }
    }
}