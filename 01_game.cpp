#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
  ll t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int count0 = 0, count1 = 0;
    for (char ch : s) {
      if (ch == '0')
        count0++;
      else
        count1++;
    }

    int moves = min(count0, count1);

    if (moves % 2 == 1) {
      cout << "DA" << endl;
    } else {
      cout << "NET" << endl;
    }
  }
  return 0;
}
