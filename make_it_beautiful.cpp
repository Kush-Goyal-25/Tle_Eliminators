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
    int n;
    cin >> n;

    int sum = 0;
    vector<int> arr(n);
    if (n == 2) {
      cout << "NO" << endl;
    }
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    if (arr[0] == arr[n - 1]) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
      cout << arr[n - 1] << " " << arr[0] << " ";
      for (int i = 1; i < n - 1; i++) {
        cout << arr[i] << " ";
      }
      cout << endl;
    }
  }
}
