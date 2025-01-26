#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--){
    ll n; cin>>n;
    ll sum=0;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if((2*sum)%n!=0){
        cout<<0<<'\n';
        continue;
    }
    ll x=(2*sum)/n;
    map<ll,ll> mp;
    ll count=0;
    for(ll i=0;i<n;i++){
        ll check=x-v[i];
        count+=mp[check];
        mp[v[i]]++;
    }
    cout<<count<<'\n';
    }
}