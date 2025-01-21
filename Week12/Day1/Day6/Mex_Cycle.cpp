#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
    int n, a, b; cin >> n >> a >> b;
    --a; --b;
    vector<int> ans(n);
    for (int i = 0; i < n; ++i) {
        ans[(a + i) % n] = i % 2;
    }
    if (n % 2 || (a - b) % 2 == 0){
        ans[a] = 2;
    }
        
    for (auto a : ans){
        cout << a << ' ';
    }
    cout <<'\n';
    }
}