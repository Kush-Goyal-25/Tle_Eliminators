#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int inc = 0;
    bool valid = true;
    
    int y=d-b;
    int x = a+y-c;

        if(x<0 || y<0){
            cout<<-1<<endl;
        }
        else{
            cout<<x+y<<endl;
        }
 }
    return 0;
}
