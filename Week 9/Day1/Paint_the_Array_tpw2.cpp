#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin>>v[i];
        ll g1=0, g2=0;
        for(ll i=0; i<n; i+=2)
        {
            g1=__gcd(g1,v[i]);
        }
        for(ll i=1; i<n; i+=2)
        {
            g2=__gcd(g2,v[i]);
        }
        bool ok = true;
        ll ans = 0;
        for(ll i=1; i<n; i+=2)
        {
            if(v[i]%g1==0)
            {
                ok=false;
            }
        }
        if(ok)
        {
            ans=g1;
        }
        else
        {
            ok = true;
            for(int i=0; i<n; i+=2)
            {
                if(v[i]%g2==0)
                {
                    ok=false;
                }
            }
            if(ok)
        {
            ans=g2;
        }
        }
        cout<<ans<<'\n';
    }
    return 0;
}