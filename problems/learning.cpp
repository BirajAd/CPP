#include <iostream>
#include <string.h>
#include <stdio.h>
#include <queue>

using namespace std;

struct Person
{
    string name;
    int age;

    void print()
    {
        cout << "Name: " << name << ", Age: " << age;
    }
};

int main()
{
    Person p;
    p.name = "biraj";
    p.age = 20;
    queue<Person> q;
    q.push(p);
    Person popped = q.front();
    cout << popped.name;
    p.print();
    return 0;
}