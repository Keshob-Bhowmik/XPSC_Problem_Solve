#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll l=0, r=0;
    ll ans=INT_MAX, sum=0;
    bool flag = false;
    while(r<n)
    {
        sum+=v[r];
        if(sum>=k)
        {
            ans=min(ans, r-l+1);
            flag=true;
            while(sum>=k)
            {
                ans=min(ans,r-l+1);
                sum-=v[l];
                l++;
            }
        }
        r++;
    }
    if(flag)
    {
        cout<<ans<<'\n';
    }
    else 
    {
        cout<<-1<<'\n';
    }
    return 0;
}