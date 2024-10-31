#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int indx = -1;
        char b = '\0';
        bool flag = false;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                indx = i;
                b = a[i];
                flag = true;
                break;
            }
        }
        if (indx != -1)
        {
            if (b != 'z')
            {
                a.insert(indx + 1, 1, char(b + 1));
            }
            else
            {
                a.insert(indx + 1, 1, 'a');
            }
        }
        else if (indx == -1)
        {
            if (a[0] != 'z')
            {
                a.insert(0, 1, char(a[0] + 1));
            }
            else
            {
                a.insert(0, 1, 'a');
            }
        }
        cout << a << endl;
    }
    return 0;
}