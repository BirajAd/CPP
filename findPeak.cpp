#include <stdio.h>
#include <iostream>

using namespace std;

#define columns 7
#define rows 6

int arr[rows][columns] = {
   { 5039,  5127,  5238,  5259,  5248,  5310,  5299 },
   { 5150,  5392,  5410,  5401,  5320,  5820,  5321 },
   { 5290,  5560,  5490,  5421,  5530,  5831,  5210 },
   { 5110,  5429,  5430,  5411,  5459,  5630,  5319 },
   { 4920,  5129,  4921,  5821,  4722,  4921,  5129 },
   { 5023,  5129,  4822,  4872,  4794,  4862,  4245 },
};

void find_peaks(int arr[][columns]);

int main() {
    
    find_peaks(arr);

    return 0;
}

// find the elements which is greater than all of it's surrounding neighbors including diagnoals
void find_peaks(int arr[][columns]) {
    int curr = 0;

    for (int i = 1; i < rows - 1; i++)
        for (int j = 1; j < columns - 1; j++) {
            curr = arr[i][j];
            //left, right, down, up, upper_left, upper_right, lower_left, lower_right
            if (arr[i][j-1] < curr && arr[i][j+1] < curr && arr[i-1][j] < curr && arr[i+1][j] < curr && arr[i-1][j-1] < curr && arr[i-1][j+1] < curr && arr[i+1][j-1] < curr && arr[i+1][j+1] < curr) {
                cout << "Peak at: " << arr[i][j] << ", index at: ";
                printf("(%d,%d)\n", i, j);
            }
        }
}