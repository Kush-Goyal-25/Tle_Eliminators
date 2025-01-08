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
    int x, k;
    cin >> x >> k;

    if (!(x % k == 0)) {
      cout << 1 << endl;
      cout << x << endl;
    } else {
      cout << 2 << endl;
      int ans = x - (k + 1);
      cout << ans << " " << k + 1 << endl;
    }
  }
}
