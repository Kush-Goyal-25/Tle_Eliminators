#include <algorithm>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#define ll long long
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = INT_MAX;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    arr[i] = abs(a);
    ans = min(ans, arr[i]);
  }

  cout << ans << endl;
}
