#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n < 4 || n % 2 != 0) {
            cout << -1 << endl;
            continue;
        }
        long long m = n / 2;
        long long max_buses = (m % 2 == 0) ? (m / 2) : ((m - 1) / 2);
        long long y = m / 3;
        if (y % 2 != m % 2) {
            y--;
        }
        long long min_buses = (m - 3 * y) / 2 + y;
        cout << min_buses << " " << max_buses << endl;
    }
    return 0;
}
