#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int increasingArray(vector<int> &nums) {
    int steps = 0;
    for(int i=1; i<nums.size(); i++){
        if(nums[i-1] > nums[i]) {
            steps += (nums[i-1]-nums[i]);
        }
    }
    return steps;
}

int main(){
    vector<int> all = { 3, 2, 5, 1, 7 };
    cout << increasingArray(all) << "\n";
}