#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int countAB(const string &s) {
  int count = 0;
  for (size_t i = 0; i < s.length() - 1; i++) {
    if (s[i] == 'a' && s[i + 1] == 'b') {
      count++;
    }
  }
  return count;
}

int countBA(const string &s) {
  int count = 0;
  for (size_t i = 0; i < s.length() - 1; i++) {
    if (s[i] == 'b' && s[i + 1] == 'a') {
      count++;
    }
  }
  return count;
}

string balance(string s) {
  int ab = countAB(s);
  int ba = countBA(s);

  if (ab == ba) {
    return s;
  }
  s[0] = (s[0] == 'a') ? 'b' : 'a';
  return s;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    string ans = balance(s);
    cout << ans << endl;
  }
  return 0;
}
