#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m,q;
        cin>>n>>m>>q;
        set<ll> teacher;
        // set<ll> david;
        for(ll i=0; i<m; i++){
            ll x; 
            cin>>x;
            teacher.insert(x);
        }
        // for(ll i=0; i<q; i++){
        //     ll x; 
        //     cin>>x;
        //     david.insert(x);
        // }
        while(q--){
            ll david;
            cin>>david;
            if(david<*(teacher.begin())){
                cout<<*(teacher.begin())-1<<'\n';
                continue;
            }
            if(david>*(teacher.rbegin())){
                ll a=*(teacher.rbegin());
                cout<<n-a<<'\n';
                continue;
            }
            auto it=teacher.lower_bound(david);
            auto it1=it;
            it1--;
            ll b=*(it);
            ll c =*(it1);
            ll mid = (b+c)/2;
            cout<<min(abs(mid-b),abs(mid-c))<<'\n';
        }
    }
    return 0;
}
