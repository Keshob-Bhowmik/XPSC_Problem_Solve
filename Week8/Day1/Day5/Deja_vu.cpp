#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, q; cin >> n >> q;
        vector<int> v(n), v1 = {30};
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        while (q--)
        {
            int a;
            cin >> a;
            if (a < v1.back())
                v1.push_back(a);
        }
        for (int a : v)
        {
            for (int b : v1)
            {
                if (a % (1 << b) == 0)
                    a |= 1 << b - 1;
            }
            cout << a << " ";
        }
        cout << '\n';
    }
}