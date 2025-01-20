#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 
        string s;
        cin >> s;

        int ans = 1;
        int count = 1; 

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                count++; 
            } else {
                ans = max(ans, count + 1); // Update max length
                count = 1; 
            }
        }

        ans = max(ans, count + 1); 
        cout << ans << endl;
    }

    return 0;
}
