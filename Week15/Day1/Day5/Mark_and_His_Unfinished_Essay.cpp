#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll n,q,m; cin>>n>>q>>m;
    string s; cin>>s;
    vector<pair<ll,ll>> v(q),v1(q);
    ll c=n;
    for(int i=0;i<q;i++){
        ll x,y;
        cin>>x>>y;
        v[i]={x,y};
        ll cnt=y-x+1;
        v1[i]={c+1,c+cnt};
        c=v1[i].second;
    }
    while(m--){
        ll a;
        cin>>a;
        if(a<=n){
            a--;
            cout<<s[a]<<'\n';
            continue;
        }
        for(int i=q-1;i>=0;i--){
            if(a>=v1[i].first && a<=v1[i].second){
                a=(v[i].first)+(a-v1[i].first);
            }
        }
        a--;
        cout<<s[a]<<'\n';
    }
    }
}