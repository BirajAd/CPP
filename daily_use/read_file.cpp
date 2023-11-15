#include <stdio.h>
#include <iostream> 
#include <fstream>
#include <vector>
#include <util.h>

using namespace std;

int main () {
    // ofstream myfile;
    // myfile.open("myfile.txt");
    // myfile << "this is first file I wrote with C++.\n";
    // myfile.close();
    vector<int> v = {5, 3, 46, 7, 9, NULL, 8, 7, 2};
    Node* a = arrayToBinary(v);

    return 0;
}