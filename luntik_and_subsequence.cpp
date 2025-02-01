#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n, cnt0 = 0, cnt1 = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int ai;
            cin >> ai;
            if (ai == 1) cnt1++;
            if (ai == 0) cnt0++;
        }

        cout << (static_cast<long long>(1) << cnt0) * cnt1 << endl;
    }

    return 0;
}
