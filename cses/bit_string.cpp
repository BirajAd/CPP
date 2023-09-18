#include <stdio.h>
#include <iostream>
#include <cmath>
#define MOD 1000000007

using namespace std;

// Q.N. Calculate the number of bit strings of length n

int main() {
  long long int x, answer=1;
  cin >> x;
  while(x--) {
    answer *= 2;
    answer %= MOD;
  }
  cout << answer << "\n";
}
