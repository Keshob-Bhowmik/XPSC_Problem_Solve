#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n; cin>>n;
    ll k; cin>>k;
    vector<ll> v(k);
    ll sum=0;
    for(ll i=0; i<k; i++){
        cin>>v[i];
        sum+=v[i];
    }
    auto ok=[&](ll council){
        ll x=council*n;
        for(ll i=0; i<k; i++){
            x-=min(council,v[i]);
        }
        return x<=0;
    };
    ll l=0, r=(sum/n)+10;
    ll mid, ans;
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
    return 0;
}