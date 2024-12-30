#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int x, y; cin >> x >> y;
        int count = 0, a;
        for (int i = 1; i <= x; i++)
        {
            cin >> a;
            count += (i % y != a % y);
        }
        if (count > 2)
            cout << -1 << endl;
        else
            cout << count / 2 << endl;
    }
}