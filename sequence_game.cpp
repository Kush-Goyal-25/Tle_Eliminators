#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<long long> arr1(n);
    for (int i = 0; i < n; i++) {
      cin >> arr1[i];
    }

    vector<long long> arr2;
    arr2.push_back(arr1[0]);

    for (int i = 1; i < n; i++) {
      if (arr1[i - 1] > arr1[i]) {
        arr2.push_back(arr1[i]);
        arr2.push_back(arr1[i]);
      } else {
        arr2.push_back(arr1[i]);
      }
    }

    cout << arr2.size() << endl;
    for (long long num : arr2) {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}
