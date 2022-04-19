// a guy has goal to earn certain billion
// n -> number of inputs, a -> money that guy has, b -> money that he needs to earn, c -> money he can make in 1 year
// calculate how many years will it take him to get there

#include <iostream>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a >> b >> c;
        cout << (b-a)/c << "\n";
    }
}