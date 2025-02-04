#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<bool> v(n + 10, false);
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'a' || s[i] == 'e') {
                i--;
                v[i] = true;
            } 
            else {
                i -= 2;
                v[i] = true;
            }
        }
        for (int i = 0; i < n; i++) {
            if (i != 0 && v[i]) {
                cout << '.';
            }
            cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}
