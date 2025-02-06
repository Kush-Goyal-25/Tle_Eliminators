#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);

    // Read the array elements
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    bool found = false;
    for (int j = 1; j < n - 1; j++) {
      if (arr[j - 1] < arr[j] && arr[j] > arr[j + 1]) {
        cout << "YES\n";
        cout << j << " " << (j + 1) << " " << (j + 2) << "\n";
        found = true;
        break;
      }
    }

    if (!found) {
      cout << "NO\n";
    }
  }

  return 0;
}
