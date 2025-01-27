#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll sum = 0;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            sum += v[i];
        }
        if (n == 1)
        {
            cout << "YES" << '\n';
            continue;
        }
        bool flag = true;
        priority_queue<ll> pq;
        pq.push(sum);
        while (!pq.empty())
        {
            ll x = pq.top();
            pq.pop();
            ll a = x / 2;
            ll b = x - x / 2;
            if (mp[a] > 0)
            {
                mp[a]--;
            }
            else if (mp[a] == 0 && a > 1)
            {
                pq.push(a);
            }
            if (mp[b] > 0)
            {
                mp[b]--;
            }
            else if (mp[b] == 0 && b > 1)
            {
                pq.push(b);
            }
            if (pq.size() > n)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            bool flag1 = true;
            for (auto &it : mp)
            {
                if (it.second > 0)
                {
                    flag1 = false;
                    break;
                }
            }
            if (flag1)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
