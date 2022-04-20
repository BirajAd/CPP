#include <iostream>

using namespace std;

int main() {
    enum class day { mon, tue, wed, thu, fri, sat, sun };
    day d = day::mon;
    cout << (d == day::mon) << "\n";
}