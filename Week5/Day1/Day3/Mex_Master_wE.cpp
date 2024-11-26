#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int c = 0;
        int c1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
                c1++;
            else
                c++;
        }
        int ans;
        if (c == 0)
        {
            ans = 0;
        }
        else
        {
            if (c1 >= c - 1)
            {
                ans = 0;
            }
            else
            {
                int mx = *max_element(v.begin(), v.end());
                if (mx == 1)
                {
                    ans = 2;
                }
                else
                {
                    ans = 1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
