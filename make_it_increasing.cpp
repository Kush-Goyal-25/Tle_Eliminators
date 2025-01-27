#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int operations = 0;
        bool possible = true;
        for (int i = n - 2; i >= 0; i--) {
            while (a[i] >= a[i + 1] && a[i] > 0) {
                a[i] /= 2;
                operations++;
            }
            if (a[i] >= a[i + 1]) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << operations << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
