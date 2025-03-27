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
     cin>>t;

     while (t--) {
          int n,k;
          cin>>n>>k;

          vector<int> arr(n);
          for (int i = 0; i < n; i++) {
               cin>>arr[i];
          }

          vector<pair<int,int>> monsters;
          for (int i = 0; i < n; i++) {
               int r = ((arr[i]-1)% k)+1;
               monsters.emplace_back(-r,i+1);
          }

          sort(monsters.begin(),monsters.end());

          for (auto &m : monsters) {
               cout<<m.second<<' ';
          }
          cout<<endl;
     }
     return 0;
}
