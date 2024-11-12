#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
        ll n,m,h; cin>>n>>m>>h;
        vector<ll> v(n);
        vector<ll> v1(m);
        for(ll i=0; i<n; i++) cin>>v[i];
        for(ll i=0; i<m; i++) cin>>v1[i];
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        ll vl=n-1, v1l=m-1;
        ll ans=0;
        // cout<<ans<<'\n';
        while(true){
            if(v[vl]>=v1[v1l]*h){
                ans+=v1[v1l]*h;
                // cout<<"if-"<<ans<<'\n';
            }
            else if(v[vl]<v1[v1l]*h){
                ans+=v[vl];
                // cout<<"elseif-"<<ans<<'\n';
            }
            vl--;
            v1l--;
            if(vl<0 || v1l<0){
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}