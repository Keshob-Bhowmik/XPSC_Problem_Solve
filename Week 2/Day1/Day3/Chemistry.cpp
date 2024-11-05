#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto u : s)
            mp[u]++;

        int oddCnt = 0;
        for (auto u : mp)
            if (u.second % 2 != 0)
                oddCnt++;

        if (oddCnt <= (k + 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
