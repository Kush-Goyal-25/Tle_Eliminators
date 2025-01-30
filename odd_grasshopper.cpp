#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x0, n;
        cin >> x0 >> n;
        long long result;

        if (n % 4 == 0) {
            result = x0;
        } else if (n % 4 == 1) {
            result = (x0 % 2 == 0) ? x0 - n : x0 + n;
        } else if (n % 4 == 2) {
            result = (x0 % 2 == 0) ? x0 + 1 : x0 - 1;
        } else {
            result = (x0 % 2 == 0) ? x0 + (n + 1) : x0 - (n + 1);
        }

        cout << result << "\n";
    }

    return 0;
}
