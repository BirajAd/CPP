#include <iostream>
#include <stdio.h>
#include <vector>
#define ll long long
using namespace std;

int increasingArray(vector<int> &nums) {
    int steps = 0;
    for(int i=1; i<nums.size(); i++){
        if(nums[i-1] > nums[i]) {
            steps += (nums[i-1]-nums[i]);
            nums[i] = nums[i-1];
        }
    }
    return steps;
}

int main(){
    // vector<int> all = { 3, 2, 5, 1, 7 };
    // cout << increasingArray(all) << "\n";
    ll int n;
    cin >> n;
    ll int nums[n];
    ll int totalSteps = 0;
    for(ll int i=0; i<n; i++) {
        cin >> nums[i];
        if(i > 0 && nums[i] < nums[i-1]) {
            totalSteps += (nums[i-1]-nums[i]);
            nums[i] = nums[i-1];
        }
    }
    cout << totalSteps << "\n";
}