#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string all;
    getline(cin, all);
    cout << all;
    int len = all.size();
    for(int i=0; i<ceil((double)len/2); i++) {
        char temp = all[i];
        all[i] = all[len-i-1];
        all[len-i-1] = temp;
        // cout << all[i] << " -> " << all[len-i-1] << "\n";
    }
    cout << " -> " << all << "\n";
    return 0;
}