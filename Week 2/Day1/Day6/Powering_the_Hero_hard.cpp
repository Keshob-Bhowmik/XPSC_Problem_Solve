#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        priority_queue<ll> pq;
        ll ans=0;
        bool flag = false;
        for(ll i=0; i<n; i++){
                int x; cin>>x;
                if(x!=0){
                    pq.push(x);
                }
                else if(x==0 && !pq.empty()){
                    ans+=pq.top();
                    pq.pop();
                    // flag=true;
                }
            }
            cout<<ans<<'\n';
        }
    return 0;
}