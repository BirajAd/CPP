#include <stdio.h>
#include <iostream>

using namespace std;

int passByReference(int &a, int &b)
{
    cout << a << ", " << b;
    return 0;
}

void swapp(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}

int main()
{
    int a = 3;
    int b = 5;
    cout << "a is at " << a << " b is at " << b << endl;
    swapp(a, b);
    cout << "a is at " << a << " b is at " << b << "\n";

    // defining pointer
    int *my_p;
    *my_p = 2;
    cout << *my_p << " is at " << my_p << " address.";
    return 0;
}

