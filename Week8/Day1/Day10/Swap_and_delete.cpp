#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int count = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
            else
            {
                count1++;
            }
                
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                 count1--;
            }
            else
            {
                count--;
            }
                
            if (count < 0 || count1 < 0)
            {
                break;
            }
            count2++;
        }
        cout << s.size() - count2 << '\n';
    }
}