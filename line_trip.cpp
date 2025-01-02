#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      arr.push_back(x);
    }
    int ans = INT_MIN;
    for (int i = 0; i + 1 < arr.size(); i++) {
      ans = max(ans, arr[i + 1] - arr[i]);
    }
    int des = 2 * (x - arr.back());
    ans = max(ans, des);
    cout << ans << endl;
  }
  return 0;
}

// 0 1 2 3 4 5 6 7
// 3 3 5
