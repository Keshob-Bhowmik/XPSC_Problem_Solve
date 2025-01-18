#include <bits/stdc++.h>
#define ll long long int
#define duronto ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ek for(ll i=1; i<=n; i++)
#define shunno for(ll i=0; i<n; i++)
#define pb push_back
#define oy cout<<"YES"<<'\n'
#define na cout<<"NO"<<'\n'
using namespace std;
int main() {
    duronto;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= n) {
                freq[x]++;
            }
        }
        vector<int> position(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j += i) {
                position[j] += freq[i];
            }
        }
        int ans = *max_element(position.begin(), position.end());
        cout << ans << '\n';
    }
    return 0;
}
