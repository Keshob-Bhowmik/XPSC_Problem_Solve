#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    } 
    map<tuple<ll,ll,ll>,ll> mp;
    ll count=0;
    for(int i=0;i<n-2;i++){
        count+=(mp[{-1,v[i+1],v[i+2]}]+mp[{v[i],-1,v[i+2]}]+mp[{v[i],v[i+1],-1}] - 3*mp[{v[i],v[i+1],v[i+2]}]);
        mp[{-1,v[i+1],v[i+2]}]++;
        mp[{v[i],-1,v[i+2]}]++;
        mp[{v[i],v[i+1],-1}]++;
        mp[{v[i],v[i+1],v[i+2]}]++;
    }
    cout<<count<<'\n';
    }
    return 0;
}