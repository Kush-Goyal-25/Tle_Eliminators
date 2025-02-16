#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minOperations(int n, int k, vector<int>& a) {
    if (k == 2 || k == 3 || k == 5) {
        int minOps = INT_MAX;
        for (int i = 0; i < n; i++) {
            int ops = (k - (a[i] % k)) % k; 
            minOps = min(minOps, ops);
        }
        return minOps;
    } else if (k == 4) {
        int countDiv2 = 0; 
        int minOpsSingle = INT_MAX; 
        int minOpsPair = INT_MAX; 

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                countDiv2++;
            }
            int opsSingle = (4 - (a[i] % 4)) % 4; 
            minOpsSingle = min(minOpsSingle, opsSingle);
        }

        if (countDiv2 >= 2) {
            minOpsPair = 0; 
        } else if (countDiv2 == 1) {
            int minOpsSecond = INT_MAX;
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 != 0) {
                    int ops = (2 - (a[i] % 2)) % 2; 
                    minOpsSecond = min(minOpsSecond, ops);
                }
            }
            minOpsPair = minOpsSecond;
        } else {
            
            vector<int> opsList;
            for (int i = 0; i < n; i++) {
                int ops = (2 - (a[i] % 2)) % 2; 
                opsList.push_back(ops);
            }
            sort(opsList.begin(), opsList.end());
            minOpsPair = opsList[0] + opsList[1];
        }

        return min(minOpsSingle, minOpsPair);
    }
    return 0; // Default case (should not reach here)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << minOperations(n, k, a) << '\n';
    }

    return 0;
}
