#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    double max_slope = (1/(double)x)*-1.0;  //(y-(y+1))/x;
    double min_slope = y*(-1.0);
    int max_x = (y+1)*x;
    int max_y = (x+1)*y;
    cout << "max slope: " << max_slope << " y range: " << "(0, " << y+1 << ")" << "(0, " << max_y << ")\n" ;
    cout << "min slope: " << min_slope << " x range: (" << x+1 << ", 0)" << "(" << max_x << ", 0)\n";
}