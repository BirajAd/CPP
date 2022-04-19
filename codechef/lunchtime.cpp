#include <iostream>
using namespace std;

int main() {
    int tests;
    cin >> tests;
    for(int i=0; i<tests; i++) {
        int time;
        cin >> time;
        if(time >= 1 && time <= 4) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}