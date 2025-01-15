#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

bool parity(int a, int b) {
  if ((a % 2 == 0) && (b % 2 == 0)) {
    return true;
  }
  if ((a % 2 != 0) && (b % 2 != 0)) {
    return true;
  }
  return false;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    int count = 0;

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
      if (parity(arr[i], arr[i - 1])) {
        count++;
      }
    }
    cout << count << endl;
  }
}
