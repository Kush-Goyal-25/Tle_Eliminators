#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        long long n, k; 
        cin >> n >> k;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end()); 

        long long maxCount = -1; 
        long long currentCount = 1; 

        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] <= k) {
                currentCount++;  
            } else {
                maxCount = max(maxCount, currentCount);
                currentCount = 1; 
            }
        }

        maxCount = max(maxCount, currentCount);
        long long toRemove = n - maxCount;
        cout << toRemove << '\n';
    }

    return 0;
}
