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
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
     
        vector<pair<int, int>> dirs = {{a, b}, {-a, b}, {a, -b}, {-a, -b},
                                       {b, a}, {-b, a}, {b, -a}, {-b, -a}};
     
        set<pair<int, int>> st1, st2;
     
        for (auto d : dirs) {
          int x = xk + d.first;
          int y = yk + d.second;
     
          st1.insert(make_pair(x, y));
     
          x = xq + d.first;
          y = yq + d.second;
     
          st2.insert(make_pair(x, y));
        }
        int ans = 0;
        for (auto pos : st1) {
          if (st2.find(pos) != st2.end()) {
            ans++;
          }
        }
        cout << ans << endl;
      }
    }
