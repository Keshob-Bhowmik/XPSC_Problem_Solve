#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll> mp;
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            mp[x]++;
        }
        priority_queue<ll> pq;
        for(auto &it:mp)
        {
            pq.push(it.second);
        }
        while(!pq.empty())
        {
            if(pq.size()<2)
            {
                break;
            }
            ll x = pq.top();
            pq.pop();
            ll y=pq.top();
            pq.pop();
            x--;
            y--;
            if(x>0)
            {
                pq.push(x);
            }
            if(y>0)
            {
                pq.push(y);
            }
        }
        ll ans=0;
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        cout<<ans<<'\n';
    }
    return 0;
}