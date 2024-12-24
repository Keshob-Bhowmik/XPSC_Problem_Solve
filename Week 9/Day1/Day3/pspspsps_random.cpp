#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s1;
        cin >> s1;
        set<char> s2;
        if (s1[0] == 's')
        {
            s1[0] = '.';
        }  
        if (s1[n - 1] == 'p')
        {
            s1[n - 1] = '.';
        }
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != '.')
            {
                s2.insert(s1[i]);
            }
                
        }
        if (s2.size() <= 1){
            cout << "YES" << '\n';
        }
            
        else
        {
             cout << "NO" << '\n';
        }
           
    }
}