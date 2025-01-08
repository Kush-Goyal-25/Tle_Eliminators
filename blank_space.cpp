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
    int count = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (arr[i] == 0) {
        count++;
      } else {
        ans = max(ans, count);
        count = 0;
      }
    }
    ans = max(ans, count);
    cout << ans << endl;
  }
}
