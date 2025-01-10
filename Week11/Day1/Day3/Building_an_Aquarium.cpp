#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin>>v[i];
        }
        auto ok=[&](ll h){
            ll w=0;
            for(int i=0; i<n; i++){
                w+=h>v[i] ? h-v[i]:0;
            }
            return w<=k;
        };
        ll l=1,r=2e9;
        ll ans,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(ok(mid)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}