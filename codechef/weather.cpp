#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int inp;
    vector<int> days(7);
    cin >> inp;
    while(inp--)
    {
        int rainy = 0, sunny = 0;
        for(int i=0; i<7; i++) {
            cin >> days[i];
            (days[i] == 0) ? rainy++ : sunny++;
        }
        string res = (sunny > rainy) ? "YES\n" : "NO\n";
        cout << res;
    }
}