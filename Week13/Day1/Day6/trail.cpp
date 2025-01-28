#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<vector<ll>> v(n, vector<ll>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        int x = 0, y = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'D')
            {
                ll sum = 0;
                for (int j = 0; j < m; j++)
                {
                    sum += v[x][j];
                }
                v[x][y] = 0 - sum;
                x++;
            }
            else if (s[i] == 'R')
            {
                ll sum = 0;
                for (int j = 0; j < n; j++)
                {
                    sum += v[j][y];
                }
                v[x][y] = 0 - sum;
                y++;
            }
        }
        ll total = 0;
        for (int j = 0; j < m; j++)
        {
            total += v[x][j];
        }
        v[x][y] = 0 - total;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << '\n';
        }
    }
}