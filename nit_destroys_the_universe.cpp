#include <iostream>
#include <vector>
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

        int groups = 0;
        bool inGroup = false;
        for (int num : arr) {
            if (num != 0) {
                if (!inGroup) {
                    groups++;
                    inGroup = true;
                }
            } else {
                inGroup = false;
            }
        }

        if (groups == 0) {
            cout << 0 << endl;
        } else if (groups == 1) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
    return 0;
}
