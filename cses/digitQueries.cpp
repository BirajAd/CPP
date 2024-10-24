#include <iostream>

using namespace std;

                 // 10                                      30                                      50
// 1 2 3 4 5 6 7 8 9 1 0 1 1 1 2 1 3 1 4 1 5 1 6 1 7 1 8 1 9 2 0 2 1 2 2 2 3 2 4 2 5 2 6 2 7 2 8 2 9 3 0
                                      //  70
// 3 1 3 2 3 3 3 4 3 5 3 6 3 7 3 8 3 9 4 0 4 1 4 2 4 3 4 4 4 5 4 6 4 7 4 8 4 9 5 0
int main() {
  int n;
  cin >> n;
  int queries[n];
  for(int i=0; i<n; i++) {
    cin >> queries[i];
    if(queries[i] < 10) {
      cout << queries[i];
      continue;
    } else {
      int divisor = queries[i]/10;
      int wNum = divisor*10;
      int remainder = queries[i]%10;
      int digit = -1;
      if(queries[i]%2 == 0) {
        cout << divisor << "\n";
        continue;
      }
    }
  }
}