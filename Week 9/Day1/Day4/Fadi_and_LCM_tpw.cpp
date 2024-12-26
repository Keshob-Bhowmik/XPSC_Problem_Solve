#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll LCM(ll a,ll b){
    return ((a/__gcd(a,b))*b);
}
int main(){
    ll n;
    cin>>n;
    set<pair<ll,ll>> s;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ll j=n/i;
            if(i<j) s.insert({i,j});
            else s.insert({j,i});
        }
    }
    ll a=LLONG_MAX,b=LLONG_MAX;
    for(auto it:s){
        ll x=it.first;
        ll y=it.second;
        if(y<b && LCM(x,y)==n){
            a=x;
            b=y;
        }
    }
    cout<<a<<" "<<b;
    return 0;
}
