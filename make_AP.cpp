#include <iostream>
using namespace std;

bool canMakeAp(int a, int b, int c) {
    if (2 * b == a + c) {
        return true;
    }
    
    if ((2 * b - c) % a == 0) {
        int m = (2 * b - c) / a;
        if (m > 0) {
            return true;
        }
    }
    
    if ((a + c) % (2 * b) == 0) {
        int m = (a + c) / (2 * b);
        if (m > 0) {
            return true;
        }
    }
    
    if ((2 * b - a) % c == 0) {
        int m = (2 * b - a) / c;
        if (m > 0) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (canMakeAp(a, b, c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
