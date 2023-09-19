#include <iostream>
// this is balanced binary tree and not a hash map
// we should use unordered_map for it to be hashmap
#include <map> 
#include <string>
#include <vector>
#include <set>
#include <fstream>

using namespace std;

vector<int> addSome(vector<int> a) {
  a.push_back(5);
  return a;
}

int main(int argc, char *argv[]) {
  ifstream myFile;
  string a;
  if(argc > 1) {
    string fileName = argv[1];
    myFile.open(fileName);
    myFile >> a;
    myFile.close();
  } else {
    cin >> a;
  }
  // int sum = 0;
  // for(auto x: a) {
  //   sum += int(x);
  // }
  // cout << sum << "\n";
  // if(sum%2 != 0) cout << "NO SOLUTION\n";

  map<char, int> chars;
  for(auto x: a) {
    if(!chars.count(x)) {
      pair<char, int> p1(x, 1);
      chars.insert(p1);
    } else {
      chars[x] += 1;
    }
  }

  // for(auto x: chars) {
  //   cout << x.first << "=>" << x.second << "\n";
  // }

  bool oddFound = false;
  char finalString[a.size()];
  int firstPointer = 0;
  int lastPointer = a.size()-1;

  for(auto x: a) {
    int totalCount = chars[x];
    // cout << "Total count of " << x << totalCount << "\n";
    if(totalCount >= 2) {
      while(totalCount>1) {
        finalString[firstPointer] = x;
        finalString[lastPointer] = x;
        // cout << "inserted " << x << " at " << firstPointer << " and " << lastPointer << "\n";
        totalCount -= 2;
        chars[x] -= 2;
        firstPointer++;
        lastPointer--;
      }
    }
    if(totalCount == 1) {
      if(a.size()%2 == 0) {
        cout << "NO SOLUTION\n";
        return 0;
      } else {
        // cout << "inserted " << x << " at " << a.size()/2 << "\n";
        finalString[a.size()/2] = x;
      }
      if(oddFound) {
        cout << "NO SOLUTION\n";
        return 0;
      }
      oddFound = true;
    }
  }

  for(auto x: finalString) {
    cout << x;
  }
  cout << "\n";

}