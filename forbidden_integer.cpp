#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        
        if (x == 1 && k == 1) {
            cout << "NO" << endl;
        } else if (x == 1 && k == 2 && n % 2 == 1) {
            cout << "NO" << endl;
        } else {
            if (x != 1) {
                cout << "YES" << endl;
                cout << n << endl;
                for (int i = 0; i < n; i++) {
                    cout << 1 << " ";
                }
                cout << endl;
            } else {
                if (n % 2 == 1) {
                    cout << "YES" << endl;
                    cout << 1 + (n - 3) / 2 << endl;
                    cout << 3 << " ";
                    n -= 3;
                    for (int i = 0; i < n / 2; i++) {
                        cout << 2 << " ";
                    }
                    cout << endl;
                } else {
                    cout << "YES" << endl;
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++) {
                        cout << 2 << " ";
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
