#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        auto ok=[&](ll x){
            ll y=x*(x-1)/2;
            return y<=n;
        };
        ll l=1, r=1e10;
        ll mid, ans;
        while(l<=r){
            mid=l+(r-l)/2;
            // cout<<mid<<'\n';
            if(ok(mid)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        ll p=ans*(ans-1)/2;
        ans+=n-p;
        cout<<ans<<'\n';
    }
    return 0;
}