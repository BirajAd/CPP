#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

//{1,0,0,0,1,0,0,1}
//{0,0,0,1,0,0,1}
int maxDistToClosest(vector<int> &seats){
  int len = seats.size();
  int maxm = 0;
  int tempMax = 0;
  // to check if we are counting from first seats
  bool firstSeat = true; 
  int startIndex = 0;
  for(int i=0; i<len; i++){
    if(seats[i] == 1) {
      // if seat is first or last we don't need
      // to find middle seat to sit to maximize distance
      tempMax = firstSeat ? tempMax : tempMax%2==0 ? tempMax/2 : tempMax/2+1;
      // not counting from first once filled up seat is found
      firstSeat = false;
      maxm = max(tempMax, maxm);
      tempMax = 0;
    } else {
      tempMax++;
    }
    if (i == len-1 && seats[i] == 0) {
      // went to last but seat is empty then evaluate
      maxm = max(tempMax, maxm);
    }
  }
  cout << "First or last?: " << firstSeat << "\n";
  return maxm;
}

int main() {
  // vector<int> sample = {0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0};
  vector<int> sample = {1,0,0,1,0,0,1};
  cout << maxDistToClosest(sample) << "\n\n";
}