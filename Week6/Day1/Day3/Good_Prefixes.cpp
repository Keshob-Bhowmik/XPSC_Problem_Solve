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
            ll sum=0;
            ll mx=LONG_MIN;
            for(ll i=0; i<n; i++)
            {
                cin>>v[i];
            }
            ll c=0;
            for(ll i=0; i<n; i++)
            {
                sum+=v[i];
                mx=max(mx,v[i]);
                if(sum-mx==mx) c++;
            }
            cout<<c<<'\n';
        }
    return 0;
}