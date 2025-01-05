#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        vector<ll>v(n+1);
        int count=0;
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        for (int i = n - 1; i > 0; i--)
        {
            if (v[i + 1] == 0)
            {
                count = -1;
                break;
            }
            while (v[i] >= v[i + 1])
                v[i] /= 2, count++;
        }
        cout << count << "\n";
    }
}