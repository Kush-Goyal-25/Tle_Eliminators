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
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int mini = INT_MAX;

    if (!is_sorted(arr.begin(), arr.end())) {
      cout << 0 << endl;
    } else {
      int diff = INT_MAX;
      for (int i = 1; i < n; i++) {
        diff = min(diff, arr[i] - arr[i - 1]);
      }
      int ans = (diff / 2) + 1;
      cout << ans << endl;
    }
  }
}
