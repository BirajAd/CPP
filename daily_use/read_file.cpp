#include <stdio.h>
#include <iostream> 
#include <fstream>

using namespace std;

int main () {
    ofstream myfile;
    myfile.open("myfile.txt");
    myfile << "this is first file I wrote with C++.\n";
    myfile.close();
    return 0;
}