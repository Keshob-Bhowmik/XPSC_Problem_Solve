#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        n--;
        vector<int> v(n), v1(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v1[i] |= v[i];
            v1[i + 1] |= v[i];
        }
        bool flag = true;


        for (int i = 0; i < n; i++)
        {
            if ((v1[i] & v1[i + 1]) != v[i])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            cout << "-1"<<'\n';
        }
        else
        {
            for (int val : v1)
            {
                cout << val << " ";
            }
            cout <<'\n';
        }
    }
}