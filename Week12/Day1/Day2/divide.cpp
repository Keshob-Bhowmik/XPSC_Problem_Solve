#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define duronto ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define oy cout<<"YES"<<'\n'
#define na cout<<"NO"<<'\n'
int main() {
   duronto;
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n;i++) {
         cin >> a[i];
      }
      map<int, int> cnt;
      for (int i = 0;i < n;i++) {
         for (int j = 2;j * j <= a[i];j++) {
            if (a[i] % j == 0) {
               while (a[i] % j == 0) {
                  cnt[j]++;
                  a[i] /= j;
               }
            }
         }
         if (a[i] > 1) {
            cnt[a[i]]++;
         }
      }

      bool ok = true;

      for (auto [x, y] : cnt) {
         if (y % n != 0) {
            ok = false;
            break;
         }
      }

      if (ok) {
         oy;
      }
      else {
         na;
      }
   }

   return 0;
}