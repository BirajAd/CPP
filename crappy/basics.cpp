#include <iostream>
// this is balanced binary tree and not a hash map
// we should use unordered_map for it to be hashmap
#include <map> 
#include <string>

using namespace std;

int main() {
  map<string, string> a;
  a["biraj"] = "user";
  a["niraj"] = "admin";
  a["suraj"] = "ruler";
  a["raj"] = "executor";
  string variable = "raj";
  // a.count(variable) > 0 ? cout << a[variable] : cout << "don't exist";
  vector<int> b = {1,2,3};
  vector<int> *c = &b;
  b.push_back(4);
  cout << "b: \n";
  for(auto x: b) {
    cout << x << " ";
  }
  cout << "\n";

  cout << "c: \n";
  for(auto x: *c) {
    cout << x << " ";
  }
}