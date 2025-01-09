#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Length of the array
        cin >> n;

        vector<int> a(n); // Array a
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Try all possible values of x from 0 to 255
        int result = -1;
        for (int x = 0; x < 256; x++) {
            int xor_sum = 0;

            // Compute XOR of transformed array
            for (int i = 0; i < n; i++) {
                xor_sum ^= (a[i] ^ x);
            }

            if (xor_sum == 0) {
                result = x; // Found a valid x
                break;
            }
        }

        cout << result << endl; // Print the result for this test case
    }

    return 0;
}
