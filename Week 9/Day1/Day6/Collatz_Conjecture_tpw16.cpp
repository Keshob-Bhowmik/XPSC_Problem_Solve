#include <bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t; cin >> t;
    while (t--)
    {
        ll x, y, k; cin >> x >> y >> k;
        ll a, b;
        while (k && x > 1)
        {
            b = y - (x % y);
            a = min(k, b);
            k -= a;
            x += a;
            while (!(x % y))
                x /= y;
        }
        if (x + k < y)
        {
            cout << x + k << '\n';
        }
        else
        {
            ll ans = x + k % (y - 1);
            cout << ans << '\n';
        }
    }
}