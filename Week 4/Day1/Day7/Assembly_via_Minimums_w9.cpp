#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int m=1e9;
int main()
{
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll x=(n*(n-1))/2;
        vector<ll> v(x),ans;
        for(ll i=0; i<x; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll p=0, indx=n-1;
        for(ll i=0; i<n-1; i++){
            p+=indx;
            // cout<<p-1<<'\n';
            // cout<<v[p]<<" ";
            ans.push_back(v[p-1]);
            indx--;
        }
        for(auto value:ans)
        {
            cout<<value<<" ";
        }
        cout<<m<<'\n';
    }
    return 0;
}