#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        long long sum = 0; 
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        long long ans1 = sum / x;

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += round(static_cast<double>(arr[i]) / x);
        }

        cout << ans1 << " " << ans << endl;
    }
    return 0;
}
