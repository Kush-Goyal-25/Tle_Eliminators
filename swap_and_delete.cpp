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
     while (t-- > 0) {
          string str;
          cin >> str;
          int zero = 0, one = 0;

          for (char c : str) {
               if (c == '0')
                    zero++;
               else
                    one++;
          }

          for (char c : str) {
               if (c == '0') {
                    if (one > 0)
                         one--;
                    else
                         break;
               } else {
                    if (zero > 0)
                         zero--;
                    else
                         break;
               }
          }

          cout << (zero + one) << endl;
     }
     return 0;
}
