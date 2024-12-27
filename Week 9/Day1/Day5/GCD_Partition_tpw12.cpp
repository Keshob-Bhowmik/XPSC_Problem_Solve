#include <bits/stdc++.h>
#define ll long long
const int x=600005;
using namespace std;
vector<int> a(x);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        ll ans = 1, sum1 = 0, sum2 = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum1 += a[i];
        }
        for (int i = 1; i < n; i++)
        {
            sum2 += a[i];
            ll ans1 = __gcd(sum1 - sum2, sum2);
            ans = max(ans, ans1);
        }
        cout << ans << '\n';
    }
}