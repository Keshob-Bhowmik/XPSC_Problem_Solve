#include <bits/stdc++.h>
#define ll long long int
#define duronto ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ek for(ll i=1; i<=n; i++)
#define shunno for(ll i=0; i<n; i++)
#define pb push_back
#define oy cout<<"YES"<<'\n'
#define na cout<<"NO"<<'\n'
using namespace std;
int main(){
    duronto;
    ll t; cin >> t;
    while (t--){
        ll n, m, k; cin >> n >> m >> k;
    vector<ll> v(n), v1(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> mp;
    for (ll i = 0; i < m; i++){
        cin >> v1[i];
        mp[v1[i]]++;
    }
    ll ans = 0;
    map<ll, ll> freq;
    ll cnt = 0;
    for (ll i = 0; i < m; i++){
        freq[v[i]]++;
        if (freq[v[i]] <= mp[v[i]])
            cnt++;
    }
    if (cnt >= k){
        ans++;
    }
    for (ll i = m; i < n; i++){

        freq[v[i]]++;

        if (freq[v[i]] <= mp[v[i]])
            cnt++;
        
        freq[v[i - m]]--;

        if (freq[v[i-m]] < mp[v[i-m]])
            cnt--;

        if (cnt >= k){
            ans++;
        }
    }
    cout << ans << '\n';
    }
    return 0;
}