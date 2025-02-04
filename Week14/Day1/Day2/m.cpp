#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n; cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    } 
    map<ll,ll> mp;
    for(ll i=0;i<n-1;i++){
        for(ll j=i+1;j<n;j++){
            mp[v[i]+v[j]]++;
        }
    }
    ll ans=LLONG_MIN;
    for(auto &it:mp){
        ans=max(ans,it.second);
    }
    cout<<ans<<'\n';
}