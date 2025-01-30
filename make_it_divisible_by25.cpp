#include <bits/stdc++.h>
using namespace std;

int minDeletionsToMakeDivisibleBy25(string n) {
    int minDeletions = INT_MAX;
    vector<string> validPairs = {"00", "25", "50", "75"};

    for (const string& pair : validPairs) {
        int firstDigit = pair[0];
        int secondDigit = pair[1];
        int firstPos = -1, secondPos = -1;

        for (int i = n.length() - 1; i >= 0; --i) {
            if (n[i] == secondDigit && secondPos == -1) {
                secondPos = i;
            } else if (n[i] == firstDigit && firstPos == -1 && secondPos != -1) {
                firstPos = i;
                break;
            }
        }

        if (firstPos != -1 && secondPos != -1) {
            int deletions = (n.length() - 1 - secondPos) + (secondPos - 1 - firstPos);
            minDeletions = min(minDeletions, deletions);
        }
    }

    return minDeletions;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        cout << minDeletionsToMakeDivisibleBy25(n) << "\n";
    }

    return 0;
}
