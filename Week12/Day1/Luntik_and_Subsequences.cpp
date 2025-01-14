#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        ll count=0, count1=1;
        for (int i = 0; i < n; i++)
        {
            ll q;
            cin >> q;
            if (q == 1)
                count++;
            if (q == 0)
                count1 *= 2;
        }
        cout << count * count1 << '\n';
    }
}