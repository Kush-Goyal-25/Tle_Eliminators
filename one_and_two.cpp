#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int id = -2;
        for (int i = 0; i < n - 1; ++i) {
            int p1 = 0, p2 = 0;
            for (int j = 0; j <= i; ++j) {
                if (a[j] == 2) {
                    ++p1;
                }
            }
            for (int j = i + 1; j < n; ++j) {
                if (a[j] == 2) {
                    ++p2;
                }
            }
            if (p1 == p2) {
                id = i;
                break;
            }
        }
        cout << id + 1 << '\n';
    }

    return 0;
}
