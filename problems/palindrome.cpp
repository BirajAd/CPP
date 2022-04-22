#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

bool isPalindrome(string s)
{
    int len = s.length();
    for(int i=0; i<len; i++)
    {
        if(s[i] != s[len-i-1])
        {
            return false;
        }
        
    }
    return true;
}

int myAtoi(string s)
{
    //"  43"
    // for(int i=0; i<s.length(); i++)
    // {
    //     if(s[i]-0)
    // }
    return 0;
}

int main() 
{
    bool isPal = isPalindrome("lolol");
    if(isPal == 0){
	    cout << "lolol is not a palindrome" << endl;
    } else {
	    cout << "lolol is palindrome" << endl;
    }
    
    // for(int i=0; i<a.length(); i++)
    // {
    //     cout << typeid(a[i]).name();
    //     if(a[i]-'0'==a[i])
    //     {
    //         cout << a[i];
    //     }
    // }
}
