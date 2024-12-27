#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t; cin >> t;
    while (t--)
    {
        ll n, k; cin >> n >> k;
        vector<ll> v(n+1);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        v[n] = n * (n + 1) / 2 - sum;
        k = k % (n + 1);
        for (int i = 0; i < n; i++)
        {
            cout << v[(i - k + n + 1) % (n + 1)] << " ";
        }
        cout << "\n";
    }
}