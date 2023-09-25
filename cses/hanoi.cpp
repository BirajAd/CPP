#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int disk, char source, char dest, char aux) {
  if(disk == 0) {
    return;
  } else {
    hanoi(disk-1, source, aux, dest);
    cout << source << " " << dest << "\n";
    hanoi(disk-1, aux, dest, source);
  }
}

int main() {
  // ||  ||  ||
  // ||  ||  ||
  // ||  ||  ||
  int n;
  cin >> n;
  cout << pow(2, n)-1 << "\n";
  hanoi(n, '1', '3', '2');
}