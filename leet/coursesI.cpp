#include <bits/stdc++.h>
using namespace std;

bool canFinish(int numCourses, vector<vector<int>>& prerequisites);

void print(vector<int> v) {
    for(int x: v) cout << x << ", ";
}

int main() {
    vector<vector<int>> pr = {{1,2},{3,2},{0,1},{1,3}};
    canFinish(5, pr);
}

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    set<int> all;
    map<int, vector<int>> courses;

    for(vector<int> c: prerequisites) {
        if(!courses.count(c[0])) {
            courses[c[0]] = { c[1] };
        } else {
            courses[c[0]].push_back(c[1]);
        }
    }

    for(auto &[k, v]: courses) {
        cout << k << ": ";
        // if(v.size() > 1) v.pop_back();
        print(v);
        cout << "\n";
    }

    return true;
}