#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <numeric>
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

    for (int i = 0; i < n - 1; i++) {
      cin >> arr[i];
    }
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << -sum << endl;
  }
}
