#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i *= 10) {
      for (int j = 1; j <= 9; j++) {
        if (i * j <= n) {
          count++;
        } else {
          break;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}
