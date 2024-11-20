#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    map<ll,ll> mp;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    // cout<<"hello";
    ll l=0, r=0;
    ll ans=0, p=0;
    while(r<n)
    {
        mp[v[r]]++;
        if(mp.size()<=k)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(mp.size()>k && l<=r)
            {
                // if(mp.size()<=k)
                // {
                //     p++;
                //     break;
                // }
                mp[v[l]]--;
                if(mp[v[l]]==0)
                {
                    mp.erase(v[l]);

                }
                l++;
            }
            if(mp.size()<=k)
            {
                ans+=(r-l+1);
            }
        }
        // ans+=p;
        r++;
    }
    cout<<ans<<'\n';
    return 0;
}