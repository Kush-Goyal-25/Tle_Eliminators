
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    if (n % 3 == 0) {
      cout << "Second" << endl;
    } else {
      cout << "First" << endl;
    }
  }
  return 0;
}

// 1 2 3
// 1 3 6 9
