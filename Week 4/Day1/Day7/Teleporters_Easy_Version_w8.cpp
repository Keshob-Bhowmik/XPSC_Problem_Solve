#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
        ll n,c; cin>>n>>c;
        multiset<ll> ml;
        for(ll i=1; i<=n; i++){
            ll x; cin>>x;
            ml.insert(x+i);
        }
        // for(auto &it:ml)
        // {
        //     cout<<it<<" ";
        // }
        // cout<<'\n';
        ll sum=0;
        ll ans=0;
        while(true){
            sum+=*ml.begin();
            if(sum>c)
            {
                break;
            }
            // cout<<*ml.begin()<<" ";
            ml.erase(ml.begin());
            ans++;
        }
        // cout<<'\n';
        cout<<ans<<'\n';
    }
    return 0;
}