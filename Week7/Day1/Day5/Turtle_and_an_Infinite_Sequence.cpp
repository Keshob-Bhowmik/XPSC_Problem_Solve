#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int mx=max(0,n-m);
        int sum=n+m;
        while(mx<sum) {
            mx|=(mx+1);
        }
        cout << mx << '\n';
    }
}