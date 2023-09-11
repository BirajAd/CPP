#include <stdio.h>
#include <iostream>

using namespace std;

// when you pass by reference you actually make the change
// to passed variable and you can choose to return the passed
// variable

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
    // assigning VALUE to the defined pointer
    *my_p = 2;
    // you could also do my_p = &a, which will basically say my_p points to
    // a's physical address, *my_p will de-reference the pointer and print the
    // value, whereas if you did just printed my_p, it will print physical 
    // address.
    cout << *my_p << " is at " << my_p << " address.";
    return 0;
}

