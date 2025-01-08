#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <unordered_map>
#include <vector>
using namespace std;
 
bool odd(int n) { return n % 2 != 0; }
 
int main() {
  int t;
  cin >> t;
 
  while (t--) {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    int f1 = 0, f2 = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
 
      if (arr[i] == -1) {
        f1++;
      } else {
        f2++;
      }
    }
 
    if (f1 <= f2) {
      if (odd(f1)) {
        cout << 1 << endl;
      } else {
        cout << 0 << endl;
      }
    } else {
      int opt = f1 - (n / 2);
 
      if (odd(n / 2)) {
        opt++;
      }
      cout << opt << endl;
    }
  }
  return 0;
}
