#include <iostream>
using namespace std;

int main() {
    string seq;
    char max_c;
    int max_count = 0;
    char prev_c = 'B';
    int prev_max = 0;
    cin >> seq;
    for(char&c: seq) {
        if(c != prev_c) {
            // cout << c << " != " << prev_c << "\n";
            if(prev_max >= max_count) {
                max_c = prev_c;
                max_count = prev_max;
            }
            prev_c = c;
            prev_max = 1;
        } else {
            prev_c = c;
            prev_max++;
            // cout << c << " == " << prev_c << " => " << prev_max << "\n";
        }

    }

    // cout << max_count << "\n";
    cout << max(prev_max, max_count);

    return 0;
}