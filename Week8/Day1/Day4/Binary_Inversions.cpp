#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (!v[i])
            {
                count++;
            }
        }
        ll ans = 0, x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (!v[i])
            {
                count--;
                x = max(x, count - y);
            }
            else
            {
                ans += count;
                x = max(x, y - count);
                y++;
            }
        }
        ans += x;
        cout << ans << '\n';
    }
}