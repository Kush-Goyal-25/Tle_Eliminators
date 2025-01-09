#include <iostream>
#include <string>
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
      int i = 0, j = n - 1;

      while (i <= j && ((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0'))) {
        i++;
        j--;
      }
      count = (j - i + 1);
      cout << count << endl;
    
  }

  return 0;
}
