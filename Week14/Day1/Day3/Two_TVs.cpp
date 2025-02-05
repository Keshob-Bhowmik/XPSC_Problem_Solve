#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin >> n;
   map<int, int> mp;
   for (int i = 1;i <= n;i++) {
      int l, r;
      cin >> l >> r;
      mp[l]++;
      mp[r + 1]--;
   }
   long long sum = 0;
   bool ok = true;
   for (auto [key, value] : mp) {
      sum += value;
      if (sum > 2) {
         ok = false;
         break;
      }
   }
   if (ok) {
      cout << "YES" << '\n';
   }
   else {
      cout << "NO" << '\n';
   }

   return 0;
}