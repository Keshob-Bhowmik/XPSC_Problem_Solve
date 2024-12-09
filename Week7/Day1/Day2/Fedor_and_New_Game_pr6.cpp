#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m+1);
    for (int i = 0; i < m+1; i++)
        cin >> v[i];
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        int x = v[i] ^ v[m];
        int difference = 0;
        for (int k = 20; k >= 0; k--)
        {
            if ((x >> k) & 1)
            {
                difference++;
            }
        }
        if (difference <= k)
            count++;
    }
    cout << count << endl;
    return 0;
}