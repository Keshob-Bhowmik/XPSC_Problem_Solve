#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        // vector<ll> v(n);
        // map<ll,ll> mp;
        ll ans=0;
        for(int i=1; i<=n; i++)
        {
            ll x; cin>>x;
            ans = __gcd(ans,abs(x-i));
        }
        cout<<ans<<'\n';
        
    }
    return 0;
}