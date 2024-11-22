#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,c; cin>>a>>b>>c;
        ll sum=b;
        vector<ll> v(c);
        for(ll i=0; i<c; i++)
        {
            cin>>v[i];
            sum+=min(v[i], a-1);
        }
        cout<<sum<<'\n';
    }
    return 0;
}