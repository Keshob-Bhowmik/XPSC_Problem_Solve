#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> v(n),v1(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        v1=v;
        ll ans = LONG_MAX;
        v1.pop_back();
        v1.pop_back();
        ans=min(v1.back()-v.front(),ans);
        v1=v;
        ans=min(v1.back()-v1[2],ans);
        ans=min(v1[n-2]-v1[1], ans);
        cout<<ans<<'\n';
    }
    return 0;
}