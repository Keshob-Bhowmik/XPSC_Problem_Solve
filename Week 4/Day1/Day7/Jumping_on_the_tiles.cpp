#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, first, last, p, q;  cin >> t;
    string s1, s2;
    while (t--)
    {
        cin >> s1;
        first = s1[0];
        last = s1[s1.size() - 1];
        if (first < last)
        {
            p = 1;
        }
        else
        {
            p = -1;
        }
        q = 0;
        s2 = "";
        for (int i = first; i != last + p; i += p)
        {
            for (int j = 0; j < s1.size(); ++j)
            {
                if (i == s1[j])
                {
                    s2 += to_string(j + 1) + " ";
                    ++q;
                }
            }
        }
        cout << abs(first - last) << " " << q << "\n";
        cout << s2 << "\n";
    }
}