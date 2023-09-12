#include <iostream>
#include <stdio.h>

using namespace std;
// You are given all numbers between 1,2,…,n
//  except one. Your task is to find the missing number.
// Soln. => Sn => n*(n+1)/2, find the sum of given
// input and subtract it from what the sum should've been

// Input:
// 5
// 2 3 1 5

// Ans => 4
int main() {
  long long int n, sum=0, a;
  cin >> n;
  for(int i=0; i<n-1; i++) {
    cin >> a;
    sum += a;
  }
  cout << n*(n+1)/2 - sum;
  return 0;
}
