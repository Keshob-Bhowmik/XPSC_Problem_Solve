#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n; cin>>n; 
    vector<ll> v(n);
    map<ll,ll> mp;
    ll sum=0;
    mp[sum]=1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        sum+=v[i];
        ll rem=(sum%n);
        if(rem<0)
        {
            rem+=n;
        }
        if(mp.find(rem)!=mp.end())
        {
            ans+=mp[rem];
            mp[rem]++;
        }
        else
        {
            mp[rem]=1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}