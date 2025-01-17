#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <ios>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <set>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

int main() {
      int t;
      cin >> t;

      while (t--) {
            long long n;
            cin >> n;

            vector<int> arr(n);
            for (long long i = 0; i < n; i++) {
                  cin >> arr[i];
            }

            if (n % 2 == 0) {
                  cout << 2 << endl;
                  cout << 1 << " " << n << endl;
                  cout << 1 << " " << n << endl;
            } else {

                  cout << 4 << endl;
                  cout << 1 << " " << n << endl;
                  cout << 2 << " " << n << endl;
                  cout << 1 << " " << 2 << endl;
                  cout << 1 << " " << 2 << endl;
            }
      }
      return 0;
}
