#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n),b(n);
        int mx = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i] - b[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] - mx < b[i] && b[i] != 0)
                flag = false;
        }
        if (flag)
           cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
}