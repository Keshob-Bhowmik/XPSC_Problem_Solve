#include<bits/stdc++.h>
#define ll long long int
#define duronto ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ek for(ll i=1; i<=n; i++)
#define shunno for(ll i=0; i<n; i++)
#define pb push_back
#define oy cout<<"YES"<<'\n'
#define na cout<<"NO"<<'\n'
using namespace std;
ll GCD(ll a, ll b) {
   return __gcd(a, b); // O(log(min(a,b)))
}

ll LCM(ll a, ll b) {
   // return ((a * b) / __gcd(a, b)); // O(log(min(a,b)))
   return (a / __gcd(a, b)) * b;
}
int main()
{
    duronto;
    ll t; cin>>t; 
    while(t--){
        ll n; cin>>n;
        vector<ll> v(n);
        map<ll,ll> mp;
        for(ll i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }

        sort(v.begin(),v.end());
        if(n==1){
            cout<<1<<'\n';
            continue;
        }

        vector<ll> g;
        for(ll i=0; i<n-1; i++){
            g.push_back(abs(v[i]-v[i+1]));
        }

        ll x=g[0];
        for(ll i=1; i<g.size(); i++){
            x=GCD(x,g[i]);
        }

        ll op=0;
        bool check = false;

        for(ll i=0; i<n-1; i++){
                ll p = abs(v[n-1]-v[i]);
                if(p%x){
                    check = true;
                    break;
                }
                op+=(p/x);
        }

        if(check){
            ll op1=0;
            for(ll i=0; i<n; i++){
                op1+=abs(v[n-1]-v[i]);
            }

        ll k=0;
        ll s=v[n-1];
        bool flag = false;
        while(k<v.size()-1){
            s-=1;
            if(mp.find(s)==mp.end()){
                flag = true;
                break;
            }
            k++;
            if(k>v.size()-1){
                break;
            }
        }

        if(flag){
            op1+=v[n-1]-s;
            cout<<op1<<'\n';
        }
        else{
            cout<<op1+v.size()<<'\n';
        }
        }

        else{
            ll k=0;
        ll s=v[n-1];
        bool flag = false;
        while(k<v.size()-1){
            s-=x;
            if(mp.find(s)==mp.end()){
                flag = true;
                break;
            }
            k++;
            if(k>v.size()-1){
                break;
            }
        }

        if(flag){
            ll p = v[n-1]-s;
            op+=(p/x);
            cout<<op<<'\n';
        }
        else{
            op+=v.size();
            cout<<op<<'\n';
        }
        }

    }
    return 0;
}