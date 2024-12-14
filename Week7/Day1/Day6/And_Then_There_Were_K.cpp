#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int x=(1<<(__lg(n)));
        cout<<x-1<<'\n';
    }
}