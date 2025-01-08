#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int a = n + 1;
    for (int i = 0; i < n; i++) {
      ans[i] = a - arr[i];
    }
    for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
    }
  }
}
