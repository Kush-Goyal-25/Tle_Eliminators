#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

bool ans(long long n) { return (n & (n - 1)) ? true : false; }

int main() {
  int t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    cout << (ans(n) ? "Yes\n" : "No\n");
  }
  return 0;
}
