#include <stdio.h>
#include <cmath>
#include <iostream>

using namespace std;

double withDrawMoney(double amt, double balance)
{
    if(remainder(amt, 5) != 0 || amt > balance)
    {
        return balance;
    }
    return balance-amt-0.5;
}

int main()
{
    cout << withDrawMoney(130, 120) << endl;
}