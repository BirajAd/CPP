#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <set>
#include <unordered_map>
#include <iterator>
using namespace std;

vector<int> findDuplicates(vector<int> anArray)
{
    vector<int> ans = {};
    unordered_map<string, int> counter = {};
    set<int> unq;
    for(int elem: anArray)
    {
        unq.insert(elem);
        if(counter.find(to_string(elem)) != counter.end())
        {
            counter[to_string(elem)] += 1;
        } else {
            counter[to_string(elem)] = 1;
        }
    }

    set<int> ::iterator itr;

    for(itr=unq.begin(); itr!=unq.end(); itr++)
    {
        if(counter[to_string(*itr)] == 2)
        {
            ans.push_back(*itr);
        }
    }

    return ans;
}

int main()
{
    vector<int> a = findDuplicates({2,3,4,3,5,4});
    for(int i: a)
    {
        cout << i << ", ";
    }
    int x;
    cout << "give me an int: ";
    cin >> x;
    int y;
    cout << "give me another int: ";
    cin >> y;
    cout << x+y;
    return 0;
}