#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll l=0, r=0;
    ll ans=0;
    multiset<ll> ml;
    while(r<n)
    {
        ml.insert(v[r]);
        ll mn=*ml.begin(); 
        ll mx=*ml.rbegin();
        if(mx-mn<=k)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(l<=r)
            {
                 mn=*ml.begin(); 
                 mx=*ml.rbegin();
                if(mx-mn<=k)
                {
                    ans+=(r-l+1);
                    break;
                }
                ml.erase(ml.find(v[l]));
                l++;
            }
            // mn=*ml.begin(); 
            // mx=*ml.rbegin();
        //     if(mx-mn<=k)
        // {
        //     ans+=(r-l+1);
        // }
        }
        r++;
    }
    cout<<ans<<'\n';
    return 0;
}