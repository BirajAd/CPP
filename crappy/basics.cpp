#include <iostream>
// this is balanced binary tree and not a hash map
// we should use unordered_map for it to be hashmap
#include <map> 
#include <string>
#include <vector>

using namespace std;

vector<int> addSome(vector<int> a) {
  a.push_back(5);
  return a;
}

int main() {
  map<string, string> a;
  a["biraj"] = "user";
  a["niraj"] = "admin";
  a["suraj"] = "ruler";
  a["raj"] = "executor";
  string variable = "raj";
  // a.count(variable) > 0 ? cout << a[variable] : cout << "don't exist";
  vector<int> b = {1,2,3};
  vector<int> &c = b;
  b.push_back(4);
  cout << "b: ";
  for(auto x: b) {
    cout << x << " ";
  }
  cout << "\n";

  cout << "c: ";
  for(auto x: c) {
    cout << x << " ";
  }
  cout << "\n";
  vector<int> d = { 1,2,3,4 };
  addSome(d);
  cout << "c: ";
  for(auto x: d) {
    cout << x << " ";
  }
  cout << "\n";

}