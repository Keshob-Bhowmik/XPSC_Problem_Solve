#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int a, b; cin >> a >> b;
        if (b < 2 * a)
        {
            cout << "-1 -1"<<'\n';
        }
        else
        {
            cout << a << " " << 2 * a << '\n';
        }
    }
}