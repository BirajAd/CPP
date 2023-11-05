#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Input:
// 5
// 3 2 7 4 1

//    1          2
//   3           
//               2
//               7
//   4           
//   1

// Output:
// 1


int main() {
  int n;
  cin >> n;
  int apples[n];
  int sumA = 0, sumB = 0, total = 0;
  for(int i=0; i<n; i++) {
    cin >> apples[i];
    total += apples[i];
  }

  int len = sizeof(apples) / sizeof(apples[0]);
  int half = total/2;

  sort(apples, apples+len);

  for(auto x: apples) {
    cout << x << " ";
  }

  cout << "\n";

  int st = 0, end = len-1;

  while(st <= end) {
    cout << sumA << "  " << sumB << ", " << apples[st] << " " << apples[end] << "\n";
    if(sumA+apples[end] <= half) {
      sumA += apples[end];
      end--;
    } else {
      if(sumB < sumA) {
        sumB += apples[st];
      } else {
        sumA += apples[st];
      }
      st++;
    }
  }

  cout << "\n";
  cout << half << "\n";
  cout << sumA << " " << sumB << "  " << abs(sumA-sumB) << "\n";

}