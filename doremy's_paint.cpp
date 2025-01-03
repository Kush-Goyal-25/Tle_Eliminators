#include <algorithm>
#include <bits/stdc++.h>
#include <map>
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
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      freq[arr[i]]++;
    }

    if (freq.size() > 2) {
      cout << "No" << endl;
    } else if (freq.size() == 1) {
      cout << "Yes" << endl;
    } else {
      auto it = freq.begin();
      int count1 = it->second;
      it++;
      int count2 = it->second;

      if (abs(count1 - count2) <= 1) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}
