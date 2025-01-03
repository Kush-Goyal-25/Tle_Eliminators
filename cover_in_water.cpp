#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;
    bool found = false;

    for (int i = 1; i < n - 1; i++) {  // We can safely start from i = 1 and go till i = n-2
      if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.') {
        cout << 2 << endl;  // If found three consecutive dots, output 2
        found = true;
        break;  // Exit the loop early since we found the answer
      }
    }

    if (!found) {  // If no sequence of three dots was found, count the individual dots
      for (char c : s) {
        if (c == '.') {
          count++;
        }
      }
      cout << count << endl;  // Output the count of dots
    }
  }

  return 0;
}
