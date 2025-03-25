#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <unordered_set>
#include <vector>
#define ll long long
using namespace std;

int main() {
     string s;
     cin>>s;

     unordered_set<char> chars;

     for (char c:s) {
          chars.insert(c);
     }

     if(chars.size()%2==0){
          cout<<"CHAT WITH HER!"<<endl;
     }
     else{
          cout<<"IGNORE HIM!"<<endl;
     }
}
