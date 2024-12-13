#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> v(n);
        ll s=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            s|=v[i];
        }
        cout<<s<<'\n';
    }
}