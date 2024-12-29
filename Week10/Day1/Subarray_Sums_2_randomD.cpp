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
    ll r=0;
    ll sum=0;
    map<ll,ll> mp;
    ll count=0;
    mp[sum]=1;
   for(ll i=0; i<n; i++)
   {    
        sum+=v[i];
        count+=mp[sum-k];
        mp[sum]++;
   }
   cout<<count<<'\n';
    return 0;
}