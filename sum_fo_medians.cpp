#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n * k);

    for (int &x : a) {
        cin >> x;
    }

    int median_pos = (n + 1) / 2;
    int step = median_pos; // Step to move to the next median
    if (n % 2 == 0) {
        step = median_pos + 1; // Adjust step for even-sized groups
    }

    long long sum = 0;
    int count = 0;
    for (int i = n * k - step; count < k; i -= step, ++count) {
        sum += a[i];
    }

    cout << sum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
