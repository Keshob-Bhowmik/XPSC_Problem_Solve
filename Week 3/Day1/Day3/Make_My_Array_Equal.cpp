#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        map<ll,ll> mp;
        for(ll i=0; i<n; i++){
            ll x; cin>>x;
            if(x==0){
                continue;
            }else{
                 mp[x]=1;
            }
        }
        if(mp.size()==0){
            cout<<"YES"<<'\n';
        }
        else if(mp.size()==1){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}