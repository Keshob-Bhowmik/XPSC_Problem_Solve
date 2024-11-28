#include <bits/stdc++.h>
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
        int XOR = 0;
        for (int i = 0; i < n; i++)
        {
            XOR ^= v[i];
        }
        for (int i = 0; i < n; i++)
        {
            v[i] ^= XOR;
        }
        int XOR2 = 0;
        for (int i = 0; i < n; i++)
        {
            XOR2 ^= v[i];
        }
        if (XOR2 == 0)
        {
            cout << XOR << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
