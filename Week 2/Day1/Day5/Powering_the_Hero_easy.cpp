#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> v(n);
        priority_queue<ll> pq;
        pq.push(0);
        ll ans=0;
        bool flag = false;
        for(ll i=0; i<n; i++){
                cin>>v[i];
                if(v[i]!=0){
                    pq.push(v[i]);
                }
                else if(v[i]==0 && !pq.empty()){
                    ans+=pq.top();
                    pq.pop();
                    // flag=true;
                }
            }
            cout<<ans<<'\n';
        }
    return 0;
}