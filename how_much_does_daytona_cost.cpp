#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    ll n, k;
    cin >> n >> k;
    bool found = false;

    for (int i = 0; i < n; i++) {
      ll num;
      cin >> num;
      if (num == k) {
        found = true;
      }
    }
    if (found) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
