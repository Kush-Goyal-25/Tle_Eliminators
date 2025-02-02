#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;

  while (t--) {
    ll a, b;
    cin >> a >> b;

    if (a == b) {
      cout << "0 0" << endl;
    } else {
      ll d = abs(a - b);
      ll r = a % d;
      ll min_steps = min(r, d - r);
      cout << d << " " << min_steps << endl;
    }
  }
  return 0;
}
