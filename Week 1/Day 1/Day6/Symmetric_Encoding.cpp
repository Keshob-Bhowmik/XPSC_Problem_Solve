#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string a, b, c;
        cin >> a;
        c = a;
        map<char, ll> mp;
        for (ll i = 0; i < a.size(); i++)
        {
            mp[a[i]];
            if (mp[a[i]] == 0)
            {
                b.push_back(a[i]);
                mp[a[i]]++;
            }
        }
        sort(b.begin(), b.end());
        int b_s = b.size();
        for (ll i = 0; i < a.size(); i++)
        {
            for (ll j = 0; j < b_s; j++)
            {
                if (a[i] == b[j])
                {
                    c[i] = b[b_s - j - 1];
                }
            }
        }
        cout << c << '\n';
    }
    return 0;
}