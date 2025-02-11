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

    ll n, k, x;
    cin >> n >> k >> x;

    ll low = (k * (k + 1)) / 2;
    ll high = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

    if (x >= low && x <= high) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}
