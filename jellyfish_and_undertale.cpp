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

  for (int tcase = 1; tcase <= t; tcase++) {
    long long a, b, n;
    cin >> a >> b >> n;

    long long ans = b - 1;

    for (int i = 0; i < n; i++) {
      long long ai;
      cin >> ai;
      if (ai <= a - 1) {
        ans += ai;
      } else {
        ans += a - 1;
      }
    }

    ans++;
    cout << ans << endl;
  }

  return 0;
}
