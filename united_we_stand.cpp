
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
#include <vector>
#define ll long long
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> b;
    vector<int> c;

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    set<int> set;
    for (int i : arr) {
      set.insert(i);
    }
    if (set.size() == 1) {
      cout << -1 << endl;
      continue;
    }
    b.push_back(arr[0]);

    for (int i = 1; i < n; i++) {
      if (arr[i] == arr[0]) {
        b.push_back(arr[i]);
      } else {
        c.push_back(arr[i]);
      }
    }
    cout << b.size() << " " << c.size() << endl;
    for (int i : b) {
      cout << i << " ";
    }
    cout << endl;
    for (int i : c) {
      cout << i << " ";
    }
    cout << endl;
  }
}
