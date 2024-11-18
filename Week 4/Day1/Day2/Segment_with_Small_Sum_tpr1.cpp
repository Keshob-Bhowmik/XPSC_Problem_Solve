#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll l=0, r=0;
    ll ans=0, sum=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum<=k)
        {
            ans=max(ans,r-l+1);
        }
        else
        {
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout<<ans;
    return 0;
}