#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void ans()
{
     ll n;
     cin >> n;

     vector<ll> arr(n);
     for (int i = 0; i < n; i++) {
          cin >> arr[i];

          if (arr[i] == 1)
               arr[i]++;
     }

     for (int i = 0; i < n - 1; i++)
     {
          if (arr[i + 1] % arr[i] == 0)
               arr[i + 1]++;
     }

     for (auto itr : arr)
     cout << itr << " ";
     cout << nline;
}

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     ll T = 1;
     cin >> T;
     while (T--) 
     {
          ans();
     }

}
