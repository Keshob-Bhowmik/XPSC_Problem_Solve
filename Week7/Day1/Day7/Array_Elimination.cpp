#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int sum[30] = {0};
        for (int i = 1; i <= n; i++)
        {
            int x; cin >> x;
            for (int j = 0; j < 30; j++)
            {
                sum[j] += (x % 2);
                x /= 2;
            }
        }
        for (int k = 1; k <= n; k++)
        {
            bool flag = true;
            for (int j = 0; j < 30; j++)
            {
                if (sum[j] % k != 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << k << " ";
            }
        }
        cout << '\n';
    }
}