#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Predefined scoring matrix
    int arr[10][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };

    int t;
    cin >> t;
    cin.ignore(); 

    while (int tcase = 1; tcase <= t; tcase++) {
        int answer = 0;

        for (int i = 0; i < 10; i++) {
            string str;
            getline(cin, str); 
            for (int j = 0; j < 10; j++) { if (str[j] == 'X') {
                    answer += arr[i][j];
                }
            }
        }

        cout << answer << endl;
    }

    return 0;
}
