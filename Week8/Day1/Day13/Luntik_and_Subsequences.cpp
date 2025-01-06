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
            ll p;
            cin >> p;
            if (p == 1)
                count++;
            if (p == 0)
                count1 *= 2;
        }
        cout << count * count1 << '\n';
    }
}