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
    ll l=0, r=0, p=0;
    ll ans=0, sum=0;
    while(r<n)
    {
        sum+=v[r];
             while(sum>=k)
            {
                p++;
                sum-=v[l];
                l++;
            }
            ans+=p;
        r++;
    }
    cout<<ans<<'\n';
    return 0;
}