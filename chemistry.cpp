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

bool odd(int n) {
    if (n % 2 == 0) {
        return false;
    } else {
        return true;
    }
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        map<char, int> mp;
        for (auto ch : s) {
            mp[ch]++;
        }

        int odds = 0;
        for (auto it : mp) {
            int freq = it.second;

            if (odd(freq)) {
                odds++;
            }
        }
        if (k < odds - 1) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
}
