#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n,k; cin>>n>>k;
        vector<ll> v(n),v1(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin>>v1[i];
        }
        ll sum=v[0];
        ll l=0, r=1;
        ll ans=0;
        if(sum<=k)
        {
            ans=1;
        }
        while(r<n)
        {
            if(v1[r-1]%v1[r]==0)
            {
                sum+=v[r];
            }
            else
            {
                sum=v[r];
                l=r;
            }
            while(sum>k)
            {
                sum-=v[l];
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}