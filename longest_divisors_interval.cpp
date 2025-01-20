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
    ll n;
    cin >> n;
    ll i = 1;

    while (n % i == 0) {
      i++;
    }
    cout << i - 1 << endl;
  }
}
