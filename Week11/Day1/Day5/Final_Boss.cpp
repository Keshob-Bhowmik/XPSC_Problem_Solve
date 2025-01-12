#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll h,d; cin>>h>>d;
    vector<ll> v(d);
    for(ll i=0; i<d; i++){
        cin>>v[i];
    }
    vector<ll> cool(d);
    for(ll i=0; i<d; i++){
        cin>>cool[i];
    }
    auto ok=[&](ll turn){
        ull sum=0;
        for(ll i=0; i<d; i++){
            ull x=(1+(turn-1)/cool[i]);
            sum+=(v[i]*x);
        }
        return sum>=h;
    };
    ll l=1, r=1e12;
    ll ans,mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<'\n';
    }
    
    return 0;
}