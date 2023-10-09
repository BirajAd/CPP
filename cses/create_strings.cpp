#include <iostream>
#include <set>

using namespace std;

set<string> perms;

void permutate(string prefix, string suffix) {
  // cout << prefix << " ==== " << suffix << "\n";
  if (suffix.length() == 0) {
    perms.insert(prefix);
    cout << "--------------" << "\n";
    return;
  }
  for(int i=0; i<suffix.length(); i++) {
    // cout << prefix + suffix[i] << " ==== " << suffix.substr(0, i) + suffix.substr(i+1) << "\n";
    cout << "prefix: " << prefix << " (" << i << ")" << " suffix: " << suffix << "\n";
    permutate(prefix + suffix[i], suffix.substr(0, i) + suffix.substr(i+1));
  }
}

int main() {
  string word;
  cin >> word;
  // r: times certain letter was repeated
  // formula: word.size()! / (r1!)*(r2!)*(r3!)
  permutate("", word);
  cout << perms.size() << "\n";
  for(auto w: perms) {
    cout << w << "\n";
  }
}