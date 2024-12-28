#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        bool flag = false;
        for (int i = x; i <= y; i++)
        {
            for (int j = 2; j <= i / j; j++)
            {
                if (i % j == 0)
                {
                    cout << j << " " << i - j << '\n';
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << '\n';
        }
    }
}