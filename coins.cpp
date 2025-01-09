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
    ll n, k;
    cin >> n >> k;

    if (n % 2 != 0 && k % 2 == 0) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
}
