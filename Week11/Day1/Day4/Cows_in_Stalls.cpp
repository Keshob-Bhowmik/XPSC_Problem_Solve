#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    auto ok=[&](ll distance){
        ll cows=0;
        ll place=v[0];
        for(int i=0;i<n;i++){
            if(place<=v[i]){
                cows++;
                place=v[i]+distance;
            }
        }
        return cows>=k;
    };
    ll l=0,r=1e9,mid,ans;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<'\n';

    return 0;
}
