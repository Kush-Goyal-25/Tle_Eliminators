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
    int n, a, b;
    cin >> n >> a >> b;

    if (a + b >= n - 1) {
      if (a == n && b == n)
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }
}
