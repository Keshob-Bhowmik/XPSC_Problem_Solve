#include<bits/stdc++.h>
#define ll long long int
#define duronto ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void keshob(){
    ll n,m; cin>>n>>m;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll seats=0;
        seats+=v[0]*2+1;
        for(int i=1; i<n; i++){
            ll x = v[i]*2+1;
            // cout<<x-1<<" ";
            if(i==n-1){
                ll y = v[i-1]+v[0];
                seats+=(x-y);
            }
            else{
                seats+=x-v[i-1];
            }
            
        }
        // cout<<seats<<'\n';
        if(seats<=m) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
}
int main()
{
    duronto;
    int t; cin>>t;
    while(t--) keshob();
    return 0;
}