// you have an array ranging from 1,2,3....,n. However, one of the number in that array is missing. Find the missing number from that array.

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;
//{1,3,2,5}
//1 2 3 4 5
//5 4 3 2 1
//----------
//6 6 6 6 6
int findMissing(vector<int> &anArray, int &len){
    //pick first number in array subtract that from len+2, add the first number, which gives us (a+b)
    int total = (len+1)*(anArray[0]+(len+2-anArray[0]))/2;
    for(int i: anArray)
        total -= i;
    
    return total;
}

int main(){
    stringstream ss;
    string str;
    vector<int> a;
    getline(cin, str);
    replace(str.begin(), str.end(), ',', ' ');
    ss << str;

    int x = 0;
    while (ss >> x)
    {
        a.push_back(x);
    }
    int len;
    cin >> len;

    cout << findMissing(a, len);
}