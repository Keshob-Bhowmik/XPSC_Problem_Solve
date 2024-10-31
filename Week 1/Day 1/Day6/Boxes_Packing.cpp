#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp;
    ll count=0;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
        
    }
    // for(auto value:v)
    // {
    //     if(mp[value]>1) count++;
    // }
    // cout<<count;
    ll ans = INT_MIN;
    for(auto &it:mp)
    {
        ans=max(ans,it.second);
    }
    cout<<ans;
    return 0;
}