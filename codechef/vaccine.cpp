#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int in, x, y, z;
    cin >> in;
    while(in--) {
        cin >> x >> y >> z;
        if(x < y) {
            cout << "Too Early\n";
        } else if (x > z) {
            cout << "Too Late\n";
        } else {
            cout << "Take second dose now\n";
        }
    }
}