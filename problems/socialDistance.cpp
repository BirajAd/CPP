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
    int res = 0;
    int startIndex = 0;
    for(int i=0; i<len; i++){
       bool start = true;
       int endIndex = i;
    //    cout << "i: " << i << "\n";
       
       if(i == len-1 && seats[i] != 1) {
            // cout << tempMax << "\n";
            if(tempMax+1 > maxm) {
                maxm = tempMax;
                res = i;
            }
        }
        if(seats[i] == 0){
           tempMax++;
        //    cout << tempMax << "\n";
        } else {
           if(start && seats[0] != 1) {
               maxm = max(maxm, tempMax);
               res = 0;
           }
            else {
               if(tempMax > maxm) {
                    maxm = tempMax;
                    res = floor((startIndex+endIndex)/2);
                }
           }
        //    cout << startIndex << ", " << endIndex << "\n";
           tempMax = 0;
           start = false;
           startIndex = endIndex;
       } 
    }
    return res;
}

int main() {
    vector<int> sample = {0,0,0,0,1,0,0,0,1,0,0,1,0,0,0};
    cout << "result: " << maxDistToClosest(sample) << "\n\n";

}