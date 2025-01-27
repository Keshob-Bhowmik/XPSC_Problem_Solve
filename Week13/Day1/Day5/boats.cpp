#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> freq;
        map<int, int> sum;
        map<int, bool> v1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }
        sort(v.begin(), v.end());
        for (auto value : freq)
        {
            v1[value.first] = true;
            for (auto y : freq)
            {
                if (v1[y.first] && value.first != y.first)
                {
                    continue;
                }
                else if (value.first == y.first)
                {
                    sum[value.first + y.first] += (y.second / 2);
                }
                else
                {
                    int mn = min(value.second, y.second);
                    sum[value.first + y.first] += mn;
                }
            }
        }
        int count = 0;
        for (auto value : sum)
        {
            count = max(count, value.second);
        }
        cout << count << '\n';
    }
}