#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        int maxDiff = INT_MIN;
        for (int i = 1; i < n; i++) {
            maxDiff = max(maxDiff, arr[i] - arr[0]);
        }

        for (int i = 0; i < n - 1; i++) {
            maxDiff = max(maxDiff, arr[n - 1] - arr[i]);
        }

        for (int i = 0; i < n - 1; i++) {
            maxDiff = max(maxDiff, arr[i] - arr[i + 1]);
        }

        cout << maxDiff << endl;
    }
    return 0;
}
