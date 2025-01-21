#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e6;
ll power(ll a, ll b) {
    ll ans = 1LL;
    while (b > 0) {
        if (b & 1) {
            ans *= a;
        }
        a = 1LL * a* a;
        b >>= 1LL;
    }
    return ans;
}
void solve(){
    ll a,b,l; cin>>a>>b>>l;
        ll k;
        set<ll> st;
        for(ll i=0; ; i++){
            for(ll j=0; ; j++){
                ll x=power(a,i);
                ll y=power(b,j);
                if(x>l){
                    cout<<st.size()<<'\n';
                    return;
                }
                else if(x*y>l){
                    // cout<<st.size()<<'\n';
                    break;
                }
                if((l%(x*y))==0){
                    k=l/(x*y);
                    // cout<<k<<'\n';
                    st.insert(k);
                }
                // else{
                //     break;
                // }
            }
        }
        cout<<st.size()<<'\n';
}
int main()
{
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}