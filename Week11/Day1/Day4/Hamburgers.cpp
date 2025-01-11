#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string reciepe;
    cin>>reciepe;
    ll nb, ns, nc; cin>>nb>>ns>>nc;
    ll pb, ps, pc; cin>>pb>>ps>>pc;
    ll cost; cin>>cost;
    ll b=0, s=0, c=0;
    for(ll i=0; i<reciepe.size(); i++){
        if(reciepe[i]=='B') b++;
        else if(reciepe[i]=='S') s++;
        else c++;
    }
    // cout<<b<<" "<<s<<" "<<c<<'\n';
    auto ok=[&](ll ham){
        ll bread=max(0ll,ham*b-nb);
        ll sausage=max(0ll,ham*s-ns);
        ll chease=max(0ll,ham*c-nc);
        ll cost_lagbe=bread*pb+sausage*ps+chease*pc;
        return cost_lagbe<=cost;
    };
    ll l=0, r=1e15;
    ll mid, ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
            }
            cout<<ans<<'\n';
    return 0;
}