#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        deque<ll> d;

        for (auto &it : mp)
        {
            if (it.second >= k)
            {
                d.push_back(it.first);
            }
        }
        // cout<<d.size()<<'\n';
        // for(auto value:d)
        // {
        //     cout<<value<<" ";
        // }
        // cout<<d[d.size()-1];
        if (d.size() == 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            auto l = d.begin(), r = d.begin() + 1;
            ll c = 1;
            ll x = 0, y = 0;
            ll mx = 0;
            ll a = *d.begin();
            ll b = a;
            // cout<<*l<<'\n';
            bool flag = false;
            while (true)
            {
                // cout<<5<<'\n';
                if (r == d.end())
                {
                    break;
                }
                // cout<<*l<<" "<<*r<<'\n';
                // cout<<*l-*r<<'\n';
                // cout<<c<<'\n';
                if (abs(*l - *r) == c)
                {
                    // cout<<"get it"<<'\n';
                    flag = true;
                    c++;
                    ll minus = *r - *l;
                    // mx=max(mx,minus);
                    if (minus > mx)
                    {
                        mx = minus;
                        // cout<<*l<<" "<<*r<<'\n';
                        x = *l, y = *r;
                    }
                    r++;
                }
                else
                {
                    l = r;
                    r++;
                    c = 1;
                }
            }
            if(!flag) cout<<a<<" "<<b<<'\n';
            else cout << x << " " << y << '\n';
        }
    }
    return 0;
}