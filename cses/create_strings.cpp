#include <iostream>
#include <set>

using namespace std;

set<string> permutate(string prefix, string suffix, set<string> &perms) {
  if (suffix.length() == 0) {
    perms.insert(prefix);
  }
  for(int i=0; i<suffix.length(); i++) {
    permutate(prefix + suffix[i], suffix.substr(0, i) + suffix.substr(i+1), perms);
  }
  return perms;
}

int main() {
  string word;
  cin >> word;
  // r: times certain letter was repeated
  // formula: word.size()! / (r1!)*(r2!)*(r3!)
  set<string> perms = {};
  permutate("", word, perms);
  cout << perms.size() << "\n";
  // for(auto w: perms) {
  //   cout << w << "\n";
  // }
}