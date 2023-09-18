#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

// 1  2  9  10 25 26 49 50
// 4  3  8  11 24 27 48 51
// 5  6  7  12 23 28 47 52
// 16 15 14 13 22 29 46 53
// 17 18 19 20 21 30 45 54
// 36 35 34 33 32 31 44 55
// 37 38 39 40 41 42 43 56

using namespace std;

int main() {
    long long int t;
    cin >> t;
    while(t--) {
        long long int row, col;
        cin >> row;
        cin >> col;
        if(row >= col) {
            long long int x = (row%2==0) ? row*row : (row-1)*(row-1)+1;
            long long int y = (row%2==0) ? x-col+1 : x+col-1;
            cout << y << "\n";
        } else {
            // ????
            long long int x = (col%2==0) ? (col-1)*(col-1)+1 : col*col;
            long long int y = (col%2==0) ? (x+row-1) : (x-row+1);
            cout << y << "\n";
        }
    }
}