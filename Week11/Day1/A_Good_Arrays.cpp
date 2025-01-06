#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> v(n);
        map<ll,ll> mp;
        ll sum=0;
        ll count=0;
        ll mx = LONG_MIN;
        for(ll i=0; i<n; i++){
            cin>>v[i];
            if(v[i]==1)
            {
                count++;
            }
            else
            {
                if(v[i]>mx)
                {
                    mx=v[i];
                }
                sum+=v[i]-1;
            }
        }
        // cout<<count<<" "<<sum<<'\n';
        if(n==1)
        {
            cout<<"NO"<<'\n';
        }
        else if(sum>=count)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}