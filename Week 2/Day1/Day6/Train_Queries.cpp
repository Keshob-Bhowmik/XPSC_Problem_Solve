#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        map<ll,set<ll>> mp;
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            mp[x].insert(i);
        }
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            if(mp.find(l)==mp.end() || mp.find(r)==mp.end())
            {
                cout<<"NO"<<'\n';
            }
            else
            {
                ll start=*mp[l].begin(), end=*mp[r].rbegin();
                if(start<end)
                {
                    cout<<"YES"<<'\n';
                }
                else
                {
                    cout<<"NO"<<'\n';
                }
            }
        }
    }
    return 0;
}