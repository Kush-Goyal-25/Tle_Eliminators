#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        vector<int> arr(n);
        vector<int> newArr(n + 1); 

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            newArr[arr[i]] = i;
        }

        vector<int> differences; 

        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                differences.push_back(abs(newArr[i + 1] - i));
            }
        }

        int gcdResult = differences[0];
        for (int diff : differences) {
            gcdResult = gcd(gcdResult, diff);
        }

        cout << gcdResult << endl;
    }

    return 0;
}
